/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    let res=[]; // output of map
    for(let i=0;i<arr.length;i++){
        let item=fn(arr[i],i);
        res.push(item);
    }
    return res;

};