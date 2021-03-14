/**
 *
 * @param {Array} priorities
 * @param {Number} location
 */
function solution(priorities, location) {
  const printList = priorities.map((priority, index) => ({
    priority,
    location: index,
  }));

  const priorityList = [...printList];
  printList.sort((a, b) => b.priority - a.priority);

  let count = 0;

  while (priorityList.length) {
    const current = priorityList.shift();
    if (current.priority < printList[0].priority) {
      priorityList.push(current);
      continue;
    }

    printList.shift();
    count++;
    if (current.location === location) {
      return count;
    }
  }
}

const result = solution([1, 1, 9, 1, 1, 1], 0);

console.log(result);
