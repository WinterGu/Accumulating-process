package gu.java.pattern.behavior.command;

public enum Size {
    SMALL("small"),NORMAL("normal");

    private String title;

    Size(String title) {
        this.title = title;
    }

    @Override
    public String toString() {
        return title;
    }
}
