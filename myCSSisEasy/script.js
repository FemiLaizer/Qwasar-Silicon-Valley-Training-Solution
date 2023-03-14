// const container = document.querySelector(".container")

// console.log(container.clientHeight)

function detect_capital(param1) {
    let arr = param1.split(""), n = param1.length;
    arr.shift()
    let toUpper = param1.toUpperCase(), toLower = param1.toLowerCase();
    if (param1 === toUpper || param1 === toLower) {
        return true;
    } else {
        for (let i = 0; i < n; i++) {
            if (i !== 0 && arr[i] === (arr[i]).toUpperCase()) {
                return false;
            } else {
                return true
            }
        }
    }
}
console.log(detect_capital("USA"))
console.log(detect_capital("FlaG"))
console.log(detect_capital("flaG"))
console.log(detect_capital("google"))
console.log(detect_capital("gooGle"))
console.log(detect_capital("Google"))

/*Given a word, you need to judge whether the usage of capitals in it is right or not.
We define the usage of capitals in a word to be right when one of the following cases holds:
All letters in this word are capitals, like "USA". All letters in this word are not capitals, like "google".
Only the first letter in this word is capitalized, like "Google". Otherwise, we define that this word doesn't use capitals in a right way.
Example 1:
Input: "USA" 
Output: True 

Example 2:
Input: "FlaG"
Output: False
*/

/*function my_levenshtein(first, second ) {
    let s1 = first.split(""), s2 = second.split(""), result = 0;

    if(first.length !== second.length){
        result = -1;
    } else  {
        for(let i =0; i< s1.length; i++){
            if(!s1.includes(s2[i])){
                result++;
            }
        }
    }
    return result;
}
// console.log(my_levenshtein("abc", "dbc"))*/


