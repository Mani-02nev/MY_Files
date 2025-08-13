const QUESTIONS = Array.from({ length: 30 }, (_, i) => {
     const n = i + 1;
     return {
          id: n,
          text: `This is sample question ${n}. Replace this with your actual question.`,
          options: [
               { id: 'A', text: `Option A for Q${n}` },
               { id: 'B', text: `Option B for Q${n}` },
               { id: 'C', text: `Option C for Q${n}` },
               { id: 'D', text: `Option D for Q${n}` }
          ]
     };
});

let current = 0;
const answers = new Array(QUESTIONS.length).fill(null);

const qgrid = document.getElementById('qgrid');
const qtitle = document.getElementById('qtitle');
const qprogress = document.getElementById('qprogress');
const qtext = document.getElementById('qtext');
const optionsDiv = document.getElementById('options');
const prevBtn = document.getElementById('prevBtn');
const nextBtn = document.getElementById('nextBtn');
const submitBtn = document.getElementById('submitBtn');

QUESTIONS.forEach((q, idx) => {
     const btn = document.createElement('button');
     btn.className = 'qbtn';
     btn.textContent = q.id;
     btn.setAttribute('data-index', idx);
     btn.addEventListener('click', () => goToQuestion(idx));
     qgrid.appendChild(btn);
});

function updateSidebarHighlight() {
     const buttons = Array.from(qgrid.children);
     buttons.forEach((b, idx) => {
          b.classList.toggle('current', idx === current);
          b.classList.toggle('answered', answers[idx] !== null);
     });
}

function renderQuestion(idx) {
     const q = QUESTIONS[idx];
     qtitle.textContent = `Question ${q.id}`;
     qprogress.textContent = `${idx + 1} / ${QUESTIONS.length}`;
     qtext.textContent = q.text;
     optionsDiv.innerHTML = '';
     q.options.forEach(opt => {
          const wrapper = document.createElement('div');
          wrapper.className = 'option';
          const input = document.createElement('input');
          input.type = 'radio';
          input.name = 'option';
          input.id = `opt-${q.id}-${opt.id}`;
          input.value = opt.id;
          input.checked = (answers[idx] === opt.id);
          input.addEventListener('change', () => {
               answers[idx] = opt.id;
               updateSidebarHighlight();
          });
          const label = document.createElement('label');
          label.htmlFor = input.id;
          label.textContent = `${opt.id}. ${opt.text}`;
          wrapper.appendChild(input);
          wrapper.appendChild(label);
          wrapper.addEventListener('click', (e) => {
               if (e.target !== input) {
                    input.checked = true;
                    input.dispatchEvent(new Event('change', { bubbles: true }));
               }
          });
          optionsDiv.appendChild(wrapper);
     });
     updateSidebarHighlight();
}

function goToQuestion(idx) {
     if (idx >= 0 && idx < QUESTIONS.length) {
          current = idx;
          renderQuestion(current);
     }
}

nextBtn.addEventListener('click', () => {
     if (current < QUESTIONS.length - 1) goToQuestion(current + 1);
     else alert('You are on the last question.');
});
prevBtn.addEventListener('click', () => {
     if (current > 0) goToQuestion(current - 1);
     else alert('You are on the first question.');
});

submitBtn.addEventListener('click', () => {
     const answeredCount = answers.filter(a => a !== null).length;
     const notAnswered = answers.map((a, i) => a === null ? i + 1 : null).filter(Boolean);
     if (!confirm(`You answered ${answeredCount} of ${QUESTIONS.length}.\nNot answered: ${notAnswered.join(', ')}\nSubmit?`)) return;
     const summary = QUESTIONS.map((q, i) => `${q.id}. ${q.text}\nAnswer: ${answers[i] ?? 'Not answered'}`).join('\n\n');
     const win = window.open('', '_blank');
     win.document.write('<pre>' + summary + '</pre>');
});

goToQuestion(0);
