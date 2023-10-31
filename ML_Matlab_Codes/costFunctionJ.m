function J = costFunctionJ(X, y, theta)

% x = design matrix = training examples
% y = class lables

m = size(X,1);		% number of training examples
predictions = X*theta;	% predictions of hypothesis on all m examples
sqrErrors = (predictions-y).^2;	% squared errors

J = 1/(2*m) * sum(sqrErrors);
