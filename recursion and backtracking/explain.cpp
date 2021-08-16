int getMyPositionInline(person person) {
    if(person.next == null) {
        return 1;
    }
    return 1 + getMyPositionInline(person.nex);
}