const hft = require("../build/Release/HftEngine");

// Main package function
//function computeOrders(input) {
    // Returns true if the input is either undefined, null, or empty, false otherwise
//    return (input === undefined || input === null || input === '');
//}

// Make the main function available to other packages that require us
// module.exports = computeOrders;

export const engine = hft.Engine;