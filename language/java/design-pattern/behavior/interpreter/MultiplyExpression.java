package gu.java.pattern.behavior.interpreter;

/**
 * @author gudongxian
 * @create 2018-05-03 下午8:49
 **/
public class MultiplyExpression extends Expression {
    private Expression leftExpression;
    private Expression rightExpression;

    public MultiplyExpression(Expression leftExpression, Expression rightExpression) {
        this.leftExpression = leftExpression;
        this.rightExpression = rightExpression;
    }

    @Override
    public int interpret() {
        return leftExpression.interpret() * rightExpression.interpret();
    }

    @Override
    public String toString() {
        return "*";
    }
}
