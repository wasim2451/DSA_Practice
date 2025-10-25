/**
 * @param {Function} fn
 * @return {Function}
 */
var once = function(fn) {
    let result;
    let flag=false;
    return function(...args){
        if(flag==false){
            flag=true;
            result=fn(...args);
            return result;
        }
    }
};

/**
 * let fn = (a,b,c) => (a + b + c)
 * let onceFn = once(fn)
 *
 * onceFn(1,2,3); // 6
 * onceFn(2,3,6); // returns undefined without calling fn
 */
