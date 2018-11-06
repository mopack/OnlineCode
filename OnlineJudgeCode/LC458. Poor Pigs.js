var poorPigs = function(n, D, T) {
    return Math.ceil(Math.log(n) / Math.log(T / D + 1));
};