#include "../include/Watchable.h"

Movie::Movie(long id, const std::string &name, int length, const std::vector<std::string> &tags) : Watchable(id, length,
                                                                                                             tags) {}
std::string Movie::toString() const {
    string output = std::to_string(getId()) + ". " + name + " " + std::to_string(getLength()) + "[";
    vector<string> tags = getTags();
    unsigned long i;
    for(i = 0; i < tags.size() - 1; i++){
        output += tags[i] + ", ";
    }
    output = output + tags[i] + "]";
    return output;
}

Watchable* Movie::getNextWatchable(Session &) const {}

Watchable* Movie::clone() {
    return new Movie(*this);
}