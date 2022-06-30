
/**
 * @param {number[][]} people
 * @return {number[][]}
 */
var reconstructQueue = function (people) {
    people.sort((x, y) => (x[0] === y[0]) ? (x[1] - y[1]) : (y[0] - x[0]));
    const reconstructedQueue = [];
    for (let person of people) {
        reconstructedQueue.splice(person[1], 0, person);
    }
    return reconstructedQueue;
};
