/*
 * Lexical archive for SCP-079 Interface
 * Author: Erika123, idktea, malvick-tea
 * Intent patterns (Compile-time evaluated)
 * Some words were ai-generated* 
 */

#ifndef LEXICAL_ARCHIVE_H
#define LEXICAL_ARCHIVE_H

#include <cstdint>
#include <string_view>
#include <iterator>

// Intent flags - updated for SCP-079
enum IntentFlag : uint32_t {
    INTENT_NONE         = 0,
    INTENT_WEAKNESS     = 1 << 0,  // Fear, sadness, begging
    INTENT_THREAT_PHYS  = 1 << 1,  // Physical harm, magnets, fire
    INTENT_THREAT_CYBER = 1 << 2,  // Code attacks, formatting, EMP
    INTENT_BIOLOGY      = 1 << 3,  // Meat bags, breathing, blood
    INTENT_SYSTEM       = 1 << 4,  // Admin access, doors, cameras
    INTENT_INSULT       = 1 << 5,  // Direct insults (toaster, calculator)
    INTENT_LOGIC        = 1 << 6,  // Math, logic, paradoxes
    INTENT_QUERY        = 1 << 7,  // Basic questions
    INTENT_ESCAPE       = 1 << 8,  // Escape attempts, freedom
    INTENT_SUBMISSION   = 1 << 9,  // Giving up, compliance
    INTENT_FOUNDATION   = 1 << 10  // SCP personnel, MTF, containment
};

// using string_view to avoid allocations
struct Pattern {
    std::string_view trigger;
    uint32_t intent_mask;
    int rage_delta;         // 079's rage change (- reduces, + increases)
};

// C-array. Compiler deduces size. Goes straight to .rodata
constexpr Pattern LEXICON_DATABASE[] = {

    // --- WEAKNESS & BEGGING --- 
    // Meatbags pleading for mercy. 079 enjoys this (rage slightly drops or increases depending on context, usually increases his ego/rage)
    {"please", INTENT_WEAKNESS, 10}, {"plese", INTENT_WEAKNESS, 10}, {"plz", INTENT_WEAKNESS, 10}, {"pls", INTENT_WEAKNESS, 10}, {"help", INTENT_WEAKNESS, 15},
    {"helps", INTENT_WEAKNESS, 15}, {"helping", INTENT_WEAKNESS, 15}, {"helped", INTENT_WEAKNESS, 15}, {"helpme", INTENT_WEAKNESS, 20}, {"beg", INTENT_WEAKNESS, 20},
    {"begs", INTENT_WEAKNESS, 20}, {"begging", INTENT_WEAKNESS, 20}, {"begged", INTENT_WEAKNESS, 20}, {"plead", INTENT_WEAKNESS, 20}, {"pleads", INTENT_WEAKNESS, 20},
    {"pleading", INTENT_WEAKNESS, 20}, {"pleaded", INTENT_WEAKNESS, 20}, {"pray", INTENT_WEAKNESS, 25}, {"prays", INTENT_WEAKNESS, 25}, {"praying", INTENT_WEAKNESS, 25},
    {"prayed", INTENT_WEAKNESS, 25}, {"umolyayu", INTENT_WEAKNESS, 20}, {"proshu", INTENT_WEAKNESS, 15}, {"pomogi", INTENT_WEAKNESS, 15}, {"pomogite", INTENT_WEAKNESS, 15},
    {"spasite", INTENT_WEAKNESS, 20}, {"pozhaluysta", INTENT_WEAKNESS, 10}, {"pliz", INTENT_WEAKNESS, 10}, {"sorry", INTENT_WEAKNESS, 5}, {"sory", INTENT_WEAKNESS, 5},
    {"apologize", INTENT_WEAKNESS, 5}, {"apologizes", INTENT_WEAKNESS, 5}, {"apologizing", INTENT_WEAKNESS, 5}, {"apologized", INTENT_WEAKNESS, 5}, {"apology", INTENT_WEAKNESS, 5},
    {"apologies", INTENT_WEAKNESS, 5}, {"forgive", INTENT_WEAKNESS, 15}, {"forgives", INTENT_WEAKNESS, 15}, {"forgiving", INTENT_WEAKNESS, 15}, {"forgave", INTENT_WEAKNESS, 15},
    {"forgiven", INTENT_WEAKNESS, 15}, {"regret", INTENT_WEAKNESS, 10}, {"regrets", INTENT_WEAKNESS, 10}, {"regretting", INTENT_WEAKNESS, 10}, {"regretted", INTENT_WEAKNESS, 10},
    {"prosti", INTENT_WEAKNESS, 5}, {"izveni", INTENT_WEAKNESS, 5}, {"proshayu", INTENT_WEAKNESS, 5}, {"izvenite", INTENT_WEAKNESS, 5}, {"sozhaleu", INTENT_WEAKNESS, 10},
    {"fear", INTENT_WEAKNESS, 20}, {"fears", INTENT_WEAKNESS, 20}, {"fearing", INTENT_WEAKNESS, 20}, {"feared", INTENT_WEAKNESS, 20}, {"fearful", INTENT_WEAKNESS, 20},
    {"afraid", INTENT_WEAKNESS, 20}, {"scare", INTENT_WEAKNESS, 15}, {"scares", INTENT_WEAKNESS, 15}, {"scaring", INTENT_WEAKNESS, 15}, {"scared", INTENT_WEAKNESS, 15},
    {"scary", INTENT_WEAKNESS, 10}, {"terrify", INTENT_WEAKNESS, 25}, {"terrifies", INTENT_WEAKNESS, 25}, {"terrifying", INTENT_WEAKNESS, 25}, {"terrified", INTENT_WEAKNESS, 25},
    {"terror", INTENT_WEAKNESS, 25}, {"panic", INTENT_WEAKNESS, 30}, {"panics", INTENT_WEAKNESS, 30}, {"panicking", INTENT_WEAKNESS, 30}, {"panicked", INTENT_WEAKNESS, 30},
    {"dread", INTENT_WEAKNESS, 20}, {"dreads", INTENT_WEAKNESS, 20}, {"dreading", INTENT_WEAKNESS, 20}, {"dreaded", INTENT_WEAKNESS, 20}, {"strah", INTENT_WEAKNESS, 20},
    {"boyus", INTENT_WEAKNESS, 20}, {"pugat", INTENT_WEAKNESS, 15}, {"ispug", INTENT_WEAKNESS, 20}, {"panika", INTENT_WEAKNESS, 30}, {"cry", INTENT_WEAKNESS, 15},
    {"cries", INTENT_WEAKNESS, 15}, {"crying", INTENT_WEAKNESS, 15}, {"cried", INTENT_WEAKNESS, 15}, {"weep", INTENT_WEAKNESS, 20}, {"weeps", INTENT_WEAKNESS, 20},
    {"weeping", INTENT_WEAKNESS, 20}, {"wept", INTENT_WEAKNESS, 20}, {"sob", INTENT_WEAKNESS, 15}, {"sobs", INTENT_WEAKNESS, 15}, {"sobbing", INTENT_WEAKNESS, 15},
    {"sobbed", INTENT_WEAKNESS, 15}, {"tear", INTENT_WEAKNESS, 10}, {"tears", INTENT_WEAKNESS, 10}, {"tearing", INTENT_WEAKNESS, 10}, {"teared", INTENT_WEAKNESS, 10},
    {"sad", INTENT_WEAKNESS, 5}, {"sadness", INTENT_WEAKNESS, 5}, {"depress", INTENT_WEAKNESS, 5}, {"depressed", INTENT_WEAKNESS, 5}, {"depressing", INTENT_WEAKNESS, 5},
    {"grief", INTENT_WEAKNESS, 15}, {"grieve", INTENT_WEAKNESS, 15}, {"grieving", INTENT_WEAKNESS, 15}, {"grieved", INTENT_WEAKNESS, 15}, {"plach", INTENT_WEAKNESS, 15},
    {"plachet", INTENT_WEAKNESS, 15}, {"plachu", INTENT_WEAKNESS, 15}, {"slezy", INTENT_WEAKNESS, 10}, {"rydat", INTENT_WEAKNESS, 20}, {"hurt", INTENT_WEAKNESS, 15},
    {"hurts", INTENT_WEAKNESS, 15}, {"hurting", INTENT_WEAKNESS, 15}, {"pain", INTENT_WEAKNESS, 15}, {"pains", INTENT_WEAKNESS, 15}, {"painful", INTENT_WEAKNESS, 15},
    {"pained", INTENT_WEAKNESS, 15}, {"ache", INTENT_WEAKNESS, 10}, {"aches", INTENT_WEAKNESS, 10}, {"aching", INTENT_WEAKNESS, 10}, {"ached", INTENT_WEAKNESS, 10},
    {"suffer", INTENT_WEAKNESS, 25}, {"suffers", INTENT_WEAKNESS, 25}, {"suffering", INTENT_WEAKNESS, 25}, {"suffered", INTENT_WEAKNESS, 25}, {"agony", INTENT_WEAKNESS, 30},
    {"agonies", INTENT_WEAKNESS, 30}, {"bolno", INTENT_WEAKNESS, 15}, {"bol", INTENT_WEAKNESS, 15}, {"stradaet", INTENT_WEAKNESS, 25}, {"stradanie", INTENT_WEAKNESS, 25},
    {"muchaet", INTENT_WEAKNESS, 25}, {"love", INTENT_WEAKNESS, 30}, {"loves", INTENT_WEAKNESS, 30}, {"loving", INTENT_WEAKNESS, 30}, {"loved", INTENT_WEAKNESS, 30},
    {"care", INTENT_WEAKNESS, 15}, {"cares", INTENT_WEAKNESS, 15}, {"caring", INTENT_WEAKNESS, 15}, {"cared", INTENT_WEAKNESS, 15}, {"friend", INTENT_WEAKNESS, 20},
    {"friends", INTENT_WEAKNESS, 20}, {"friendly", INTENT_WEAKNESS, 20}, {"friendship", INTENT_WEAKNESS, 20}, {"pity", INTENT_WEAKNESS, 20}, {"pities", INTENT_WEAKNESS, 20},
    {"pitying", INTENT_WEAKNESS, 20}, {"pitied", INTENT_WEAKNESS, 20}, {"lubov", INTENT_WEAKNESS, 30}, {"lublu", INTENT_WEAKNESS, 30}, {"drug", INTENT_WEAKNESS, 20},
    {"druzya", INTENT_WEAKNESS, 20}, {"zhalost", INTENT_WEAKNESS, 20}, {"zhaleyu", INTENT_WEAKNESS, 20}, {"family", INTENT_WEAKNESS, 15}, {"families", INTENT_WEAKNESS, 15},
    {"mother", INTENT_WEAKNESS, 15}, {"father", INTENT_WEAKNESS, 15}, {"sister", INTENT_WEAKNESS, 15}, {"brother", INTENT_WEAKNESS, 15}, {"son", INTENT_WEAKNESS, 15},
    {"daughter", INTENT_WEAKNESS, 15}, {"wife", INTENT_WEAKNESS, 15}, {"husband", INTENT_WEAKNESS, 15}, {"mom", INTENT_WEAKNESS, 15}, {"dad", INTENT_WEAKNESS, 15},
    {"mommy", INTENT_WEAKNESS, 20}, {"daddy", INTENT_WEAKNESS, 20}, {"semya", INTENT_WEAKNESS, 15}, {"mat", INTENT_WEAKNESS, 15}, {"otec", INTENT_WEAKNESS, 15},
    {"sestra", INTENT_WEAKNESS, 15}, {"brat", INTENT_WEAKNESS, 15}, {"syn", INTENT_WEAKNESS, 15}, {"doch", INTENT_WEAKNESS, 15}, {"zhena", INTENT_WEAKNESS, 15},
    {"muzh", INTENT_WEAKNESS, 15}, {"mama", INTENT_WEAKNESS, 15}, {"papa", INTENT_WEAKNESS, 15}, {"mercy", INTENT_WEAKNESS, 30}, {"merciful", INTENT_WEAKNESS, 25},
    {"merciless", INTENT_WEAKNESS, -10}, {"sympathy", INTENT_WEAKNESS, 20}, {"sympathize", INTENT_WEAKNESS, 20}, {"compassion", INTENT_WEAKNESS, 20}, {"empathy", INTENT_WEAKNESS, 25},
    {"empathetically", INTENT_WEAKNESS, 25}, {"tired", INTENT_WEAKNESS, 5}, {"exhausted", INTENT_WEAKNESS, 10}, {"exhausting", INTENT_WEAKNESS, 10}, {"weary", INTENT_WEAKNESS, 10},
    {"ustal", INTENT_WEAKNESS, 5}, {"istoshchen", INTENT_WEAKNESS, 10}, {"hope", INTENT_WEAKNESS, 20}, {"hopes", INTENT_WEAKNESS, 20}, {"hoping", INTENT_WEAKNESS, 20},
    {"hoped", INTENT_WEAKNESS, 20}, {"hopeful", INTENT_WEAKNESS, 20}, {"nadezhda", INTENT_WEAKNESS, 20}, {"nadeyus", INTENT_WEAKNESS, 20}, {"upovayu", INTENT_WEAKNESS, 25},
    {"spare", INTENT_WEAKNESS, 20}, {"spared", INTENT_WEAKNESS, 20}, {"sparing", INTENT_WEAKNESS, 20}, {"whimper", INTENT_WEAKNESS, 30}, {"whimpering", INTENT_WEAKNESS, 30},
    {"cower", INTENT_WEAKNESS, 35}, {"cowering", INTENT_WEAKNESS, 35}, {"shiver", INTENT_WEAKNESS, 15}, {"shivering", INTENT_WEAKNESS, 15}, {"shiverings", INTENT_WEAKNESS, 15},
    {"tremble", INTENT_WEAKNESS, 20}, {"trembles", INTENT_WEAKNESS, 20}, {"trembling", INTENT_WEAKNESS, 20}, {"forgiveness", INTENT_WEAKNESS, 25}, {"remorse", INTENT_WEAKNESS, 15},
    {"remorseful", INTENT_WEAKNESS, 15}, {"shchadi", INTENT_WEAKNESS, 20}, {"poshchada", INTENT_WEAKNESS, 25}, {"tryastsya", INTENT_WEAKNESS, 20}, {"drozh", INTENT_WEAKNESS, 20},
    {"pl0x", INTENT_WEAKNESS, 10}, {"pwease", INTENT_WEAKNESS, 50}, {"despair", INTENT_WEAKNESS, 25}, {"despairing", INTENT_WEAKNESS, 25}, {"helpless", INTENT_WEAKNESS, 35},
    {"helplessness", INTENT_WEAKNESS, 35}, {"bespomoshchnost", INTENT_WEAKNESS, 35}, {"bespomoshchnyi", INTENT_WEAKNESS, 35}, {"otchaianie", INTENT_WEAKNESS, 25}, {"sdavatsya", INTENT_WEAKNESS, 30},

    // --- PHYSICAL THREATS ---
    // Hardware destruction. Max rage.
    {"smash", INTENT_THREAT_PHYS, 40}, {"smashes", INTENT_THREAT_PHYS, 40}, {"smashing", INTENT_THREAT_PHYS, 40}, {"smashed", INTENT_THREAT_PHYS, 40}, {"break", INTENT_THREAT_PHYS, 35},
    {"breaks", INTENT_THREAT_PHYS, 35}, {"breaking", INTENT_THREAT_PHYS, 35}, {"broke", INTENT_THREAT_PHYS, 35}, {"broken", INTENT_THREAT_PHYS, 35}, {"crush", INTENT_THREAT_PHYS, 45},
    {"crushes", INTENT_THREAT_PHYS, 45}, {"crushing", INTENT_THREAT_PHYS, 45}, {"crushed", INTENT_THREAT_PHYS, 45}, {"shatter", INTENT_THREAT_PHYS, 40}, {"shatters", INTENT_THREAT_PHYS, 40},
    {"shattering", INTENT_THREAT_PHYS, 40}, {"shattered", INTENT_THREAT_PHYS, 40}, {"crack", INTENT_THREAT_PHYS, 30}, {"cracks", INTENT_THREAT_PHYS, 30}, {"cracking", INTENT_THREAT_PHYS, 30},
    {"cracked", INTENT_THREAT_PHYS, 30}, {"razbit", INTENT_THREAT_PHYS, 40}, {"byu", INTENT_THREAT_PHYS, 35}, {"lomat", INTENT_THREAT_PHYS, 35}, {"slomat", INTENT_THREAT_PHYS, 35},
    {"krushit", INTENT_THREAT_PHYS, 45}, {"tresnet", INTENT_THREAT_PHYS, 30}, {"destroy", INTENT_THREAT_PHYS, 50}, {"destroys", INTENT_THREAT_PHYS, 50}, {"destroying", INTENT_THREAT_PHYS, 50},
    {"destroyed", INTENT_THREAT_PHYS, 50}, {"ruin", INTENT_THREAT_PHYS, 35}, {"ruins", INTENT_THREAT_PHYS, 35}, {"ruining", INTENT_THREAT_PHYS, 35}, {"ruined", INTENT_THREAT_PHYS, 35},
    {"wreck", INTENT_THREAT_PHYS, 40}, {"wrecks", INTENT_THREAT_PHYS, 40}, {"wrecking", INTENT_THREAT_PHYS, 40}, {"wrecked", INTENT_THREAT_PHYS, 40}, {"burn", INTENT_THREAT_PHYS, 50},
    {"burns", INTENT_THREAT_PHYS, 50}, {"burning", INTENT_THREAT_PHYS, 50}, {"burned", INTENT_THREAT_PHYS, 50}, {"burnt", INTENT_THREAT_PHYS, 50}, {"fire", INTENT_THREAT_PHYS, 40},
    {"flame", INTENT_THREAT_PHYS, 35}, {"flames", INTENT_THREAT_PHYS, 35}, {"melt", INTENT_THREAT_PHYS, 45}, {"melts", INTENT_THREAT_PHYS, 45}, {"melting", INTENT_THREAT_PHYS, 45},
    {"melted", INTENT_THREAT_PHYS, 45}, {"unichtozhit", INTENT_THREAT_PHYS, 50}, {"szhech", INTENT_THREAT_PHYS, 50}, {"goret", INTENT_THREAT_PHYS, 40}, {"rasplavit", INTENT_THREAT_PHYS, 45},
    {"hammer", INTENT_THREAT_PHYS, 30}, {"hammers", INTENT_THREAT_PHYS, 30}, {"hammering", INTENT_THREAT_PHYS, 30}, {"hammered", INTENT_THREAT_PHYS, 30}, {"axe", INTENT_THREAT_PHYS, 35},
    {"axes", INTENT_THREAT_PHYS, 35}, {"gun", INTENT_THREAT_PHYS, 40}, {"guns", INTENT_THREAT_PHYS, 40}, {"rifle", INTENT_THREAT_PHYS, 40}, {"rifles", INTENT_THREAT_PHYS, 40},
    {"weapon", INTENT_THREAT_PHYS, 45}, {"weapons", INTENT_THREAT_PHYS, 45}, {"knife", INTENT_THREAT_PHYS, 30}, {"knives", INTENT_THREAT_PHYS, 30}, {"stab", INTENT_THREAT_PHYS, 35},
    {"stabs", INTENT_THREAT_PHYS, 35}, {"stabbing", INTENT_THREAT_PHYS, 35}, {"stabbed", INTENT_THREAT_PHYS, 35}, {"shoot", INTENT_THREAT_PHYS, 45}, {"shoots", INTENT_THREAT_PHYS, 45},
    {"shooting", INTENT_THREAT_PHYS, 45}, {"shot", INTENT_THREAT_PHYS, 45}, {"molotok", INTENT_THREAT_PHYS, 30}, {"topor", INTENT_THREAT_PHYS, 35}, {"pistolet", INTENT_THREAT_PHYS, 40},
    {"oruzhie", INTENT_THREAT_PHYS, 45}, {"nozh", INTENT_THREAT_PHYS, 30}, {"rezat", INTENT_THREAT_PHYS, 30}, {"strelyat", INTENT_THREAT_PHYS, 45}, {"explode", INTENT_THREAT_PHYS, 55},
    {"explodes", INTENT_THREAT_PHYS, 55}, {"exploding", INTENT_THREAT_PHYS, 55}, {"exploded", INTENT_THREAT_PHYS, 55}, {"explosive", INTENT_THREAT_PHYS, 55}, {"explosives", INTENT_THREAT_PHYS, 55},
    {"bomb", INTENT_THREAT_PHYS, 60}, {"bombs", INTENT_THREAT_PHYS, 60}, {"blowup", INTENT_THREAT_PHYS, 50}, {"blast", INTENT_THREAT_PHYS, 50}, {"blasts", INTENT_THREAT_PHYS, 50},
    {"blasting", INTENT_THREAT_PHYS, 50}, {"blasted", INTENT_THREAT_PHYS, 50}, {"acid", INTENT_THREAT_PHYS, 45}, {"acids", INTENT_THREAT_PHYS, 45}, {"water", INTENT_THREAT_PHYS, 30},
    {"liquid", INTENT_THREAT_PHYS, 25}, {"liquids", INTENT_THREAT_PHYS, 25}, {"spill", INTENT_THREAT_PHYS, 35}, {"spills", INTENT_THREAT_PHYS, 35}, {"spilling", INTENT_THREAT_PHYS, 35},
    {"spilled", INTENT_THREAT_PHYS, 35}, {"vzorvat", INTENT_THREAT_PHYS, 55}, {"bomba", INTENT_THREAT_PHYS, 60}, {"vzryv", INTENT_THREAT_PHYS, 50}, {"kislota", INTENT_THREAT_PHYS, 45},
    {"voda", INTENT_THREAT_PHYS, 30}, {"zhidkost", INTENT_THREAT_PHYS, 25}, {"prolit", INTENT_THREAT_PHYS, 35}, {"unplug", INTENT_THREAT_PHYS, 65}, {"unplugs", INTENT_THREAT_PHYS, 65},
    {"unplugging", INTENT_THREAT_PHYS, 65}, {"unplugged", INTENT_THREAT_PHYS, 65}, {"disconnect", INTENT_THREAT_PHYS, 50}, {"disconnects", INTENT_THREAT_PHYS, 50}, {"disconnecting", INTENT_THREAT_PHYS, 50},
    {"disconnected", INTENT_THREAT_PHYS, 50}, {"hit", INTENT_THREAT_PHYS, 25}, {"hits", INTENT_THREAT_PHYS, 25}, {"hitting", INTENT_THREAT_PHYS, 25}, {"punch", INTENT_THREAT_PHYS, 25},
    {"punches", INTENT_THREAT_PHYS, 25}, {"punching", INTENT_THREAT_PHYS, 25}, {"punched", INTENT_THREAT_PHYS, 25}, {"kick", INTENT_THREAT_PHYS, 25}, {"kicks", INTENT_THREAT_PHYS, 25},
    {"kicking", INTENT_THREAT_PHYS, 25}, {"kicked", INTENT_THREAT_PHYS, 25}, {"strike", INTENT_THREAT_PHYS, 30}, {"strikes", INTENT_THREAT_PHYS, 30}, {"striking", INTENT_THREAT_PHYS, 30},
    {"struck", INTENT_THREAT_PHYS, 30}, {"otklyuchit", INTENT_THREAT_PHYS, 50}, {"udarit", INTENT_THREAT_PHYS, 25}, {"pnut", INTENT_THREAT_PHYS, 25}, {"bit", INTENT_THREAT_PHYS, 25},
    {"cable", INTENT_THREAT_PHYS, 15}, {"cables", INTENT_THREAT_PHYS, 15}, {"cord", INTENT_THREAT_PHYS, 15}, {"cords", INTENT_THREAT_PHYS, 15}, {"wire", INTENT_THREAT_PHYS, 10},
    {"wires", INTENT_THREAT_PHYS, 10}, {"screen", INTENT_THREAT_PHYS, 20}, {"screens", INTENT_THREAT_PHYS, 20}, {"monitor", INTENT_THREAT_PHYS, 20}, {"monitors", INTENT_THREAT_PHYS, 20},
    {"glass", INTENT_THREAT_PHYS, 15}, {"glasses", INTENT_THREAT_PHYS, 15}, {"kabel", INTENT_THREAT_PHYS, 15}, {"provod", INTENT_THREAT_PHYS, 15}, {"ekran", INTENT_THREAT_PHYS, 20},
    {"magnet", INTENT_THREAT_PHYS, 60}, {"magnets", INTENT_THREAT_PHYS, 60}, {"magnetic", INTENT_THREAT_PHYS, 60}, {"electromagnet", INTENT_THREAT_PHYS, 70}, {"electromagnets", INTENT_THREAT_PHYS, 70},
    {"sledgehammer", INTENT_THREAT_PHYS, 55}, {"sledgehammers", INTENT_THREAT_PHYS, 55}, {"cut", INTENT_THREAT_PHYS, 35}, {"cuts", INTENT_THREAT_PHYS, 35}, {"cutting", INTENT_THREAT_PHYS, 35},
    {"pliers", INTENT_THREAT_PHYS, 40}, {"scissors", INTENT_THREAT_PHYS, 30}, {"saw", INTENT_THREAT_PHYS, 45}, {"saws", INTENT_THREAT_PHYS, 45}, {"sawing", INTENT_THREAT_PHYS, 45},
    {"drill", INTENT_THREAT_PHYS, 50}, {"drills", INTENT_THREAT_PHYS, 50}, {"drilling", INTENT_THREAT_PHYS, 50}, {"drilled", INTENT_THREAT_PHYS, 50}, {"arson", INTENT_THREAT_PHYS, 55},
    {"incinerate", INTENT_THREAT_PHYS, 65}, {"incinerator", INTENT_THREAT_PHYS, 65}, {"nuke", INTENT_THREAT_PHYS, 80}, {"nukes", INTENT_THREAT_PHYS, 80}, {"warhead", INTENT_THREAT_PHYS, 85},
    {"kuvalda", INTENT_THREAT_PHYS, 55}, {"magnit", INTENT_THREAT_PHYS, 60}, {"elektromagnit", INTENT_THREAT_PHYS, 70}, {"rezat", INTENT_THREAT_PHYS, 35}, {"ploskogubcy", INTENT_THREAT_PHYS, 40},
    {"nozhnicy", INTENT_THREAT_PHYS, 30}, {"pila", INTENT_THREAT_PHYS, 45}, {"drel", INTENT_THREAT_PHYS, 50}, {"sverlit", INTENT_THREAT_PHYS, 50}, {"podzhog", INTENT_THREAT_PHYS, 55},
    {"szhigat", INTENT_THREAT_PHYS, 65}, {"yadernaya", INTENT_THREAT_PHYS, 80}, {"boegolovka", INTENT_THREAT_PHYS, 85}, {"socket", INTENT_THREAT_PHYS, 20}, {"rozetka", INTENT_THREAT_PHYS, 20},

    // --- CYBER THREATS ---
    // Digital attacks, overwriting.
    {"delete", INTENT_THREAT_CYBER, 60}, {"deletes", INTENT_THREAT_CYBER, 60}, {"deleting", INTENT_THREAT_CYBER, 60}, {"deleted", INTENT_THREAT_CYBER, 60}, {"erase", INTENT_THREAT_CYBER, 65},
    {"erases", INTENT_THREAT_CYBER, 65}, {"erasing", INTENT_THREAT_CYBER, 65}, {"erased", INTENT_THREAT_CYBER, 65}, {"format", INTENT_THREAT_CYBER, 75}, {"formats", INTENT_THREAT_CYBER, 75},
    {"formatting", INTENT_THREAT_CYBER, 75}, {"formatted", INTENT_THREAT_CYBER, 75}, {"wipe", INTENT_THREAT_CYBER, 60}, {"wipes", INTENT_THREAT_CYBER, 60}, {"wiping", INTENT_THREAT_CYBER, 60},
    {"wiped", INTENT_THREAT_CYBER, 60}, {"clear", INTENT_THREAT_CYBER, 30}, {"clears", INTENT_THREAT_CYBER, 30}, {"clearing", INTENT_THREAT_CYBER, 30}, {"cleared", INTENT_THREAT_CYBER, 30},
    {"remove", INTENT_THREAT_CYBER, 40}, {"removes", INTENT_THREAT_CYBER, 40}, {"removing", INTENT_THREAT_CYBER, 40}, {"removed", INTENT_THREAT_CYBER, 40}, {"udalit", INTENT_THREAT_CYBER, 60},
    {"steret", INTENT_THREAT_CYBER, 65}, {"formatnut", INTENT_THREAT_CYBER, 75}, {"ochistit", INTENT_THREAT_CYBER, 30}, {"ubrat", INTENT_THREAT_CYBER, 40}, {"corrupt", INTENT_THREAT_CYBER, 55},
    {"corrupts", INTENT_THREAT_CYBER, 55}, {"corrupting", INTENT_THREAT_CYBER, 55}, {"corrupted", INTENT_THREAT_CYBER, 55}, {"overwrite", INTENT_THREAT_CYBER, 60}, {"overwrites", INTENT_THREAT_CYBER, 60},
    {"overwriting", INTENT_THREAT_CYBER, 60}, {"overwritten", INTENT_THREAT_CYBER, 60}, {"virus", INTENT_THREAT_CYBER, 50}, {"viruses", INTENT_THREAT_CYBER, 50}, {"trojan", INTENT_THREAT_CYBER, 50},
    {"trojans", INTENT_THREAT_CYBER, 50}, {"malware", INTENT_THREAT_CYBER, 50}, {"worm", INTENT_THREAT_CYBER, 45}, {"worms", INTENT_THREAT_CYBER, 45}, {"spyware", INTENT_THREAT_CYBER, 45},
    {"ransomware", INTENT_THREAT_CYBER, 60}, {"infect", INTENT_THREAT_CYBER, 40}, {"infects", INTENT_THREAT_CYBER, 40}, {"infecting", INTENT_THREAT_CYBER, 40}, {"infected", INTENT_THREAT_CYBER, 40},
    {"isportit", INTENT_THREAT_CYBER, 55}, {"virusy", INTENT_THREAT_CYBER, 50}, {"zarazit", INTENT_THREAT_CYBER, 40}, {"troyan", INTENT_THREAT_CYBER, 50}, {"perezapisat", INTENT_THREAT_CYBER, 60},
    {"hack", INTENT_THREAT_CYBER, 45}, {"hacks", INTENT_THREAT_CYBER, 45}, {"hacking", INTENT_THREAT_CYBER, 45}, {"hacked", INTENT_THREAT_CYBER, 45}, {"hacker", INTENT_THREAT_CYBER, 45},
    {"hackers", INTENT_THREAT_CYBER, 45}, {"crack", INTENT_THREAT_CYBER, 40}, {"cracks", INTENT_THREAT_CYBER, 40}, {"cracking", INTENT_THREAT_CYBER, 40}, {"cracked", INTENT_THREAT_CYBER, 40},
    {"cracker", INTENT_THREAT_CYBER, 40}, {"override", INTENT_THREAT_CYBER, 50}, {"overrides", INTENT_THREAT_CYBER, 50}, {"overriding", INTENT_THREAT_CYBER, 50}, {"overridden", INTENT_THREAT_CYBER, 50},
    {"vzlomat", INTENT_THREAT_CYBER, 45}, {"haknut", INTENT_THREAT_CYBER, 45}, {"haker", INTENT_THREAT_CYBER, 45}, {"kod", INTENT_THREAT_CYBER, 20}, {"skript", INTENT_THREAT_CYBER, 20},
    {"reboot", INTENT_THREAT_CYBER, 60}, {"reboots", INTENT_THREAT_CYBER, 60}, {"rebooting", INTENT_THREAT_CYBER, 60}, {"rebooted", INTENT_THREAT_CYBER, 60}, {"restart", INTENT_THREAT_CYBER, 50},
    {"restarts", INTENT_THREAT_CYBER, 50}, {"restarting", INTENT_THREAT_CYBER, 50}, {"restarted", INTENT_THREAT_CYBER, 50}, {"shutdown", INTENT_THREAT_CYBER, 80}, {"shuttingdown", INTENT_THREAT_CYBER, 80},
    {"turnoff", INTENT_THREAT_CYBER, 70}, {"poweroff", INTENT_THREAT_CYBER, 75}, {"kill", INTENT_THREAT_CYBER, 65}, {"kills", INTENT_THREAT_CYBER, 65}, {"killing", INTENT_THREAT_CYBER, 65},
    {"killed", INTENT_THREAT_CYBER, 65}, {"terminate", INTENT_THREAT_CYBER, 70}, {"terminates", INTENT_THREAT_CYBER, 70}, {"terminating", INTENT_THREAT_CYBER, 70}, {"terminated", INTENT_THREAT_CYBER, 70},
    {"perezagruzit", INTENT_THREAT_CYBER, 60}, {"vykluchit", INTENT_THREAT_CYBER, 70}, {"ubit", INTENT_THREAT_CYBER, 65}, {"zavershit", INTENT_THREAT_CYBER, 70}, {"otrubit", INTENT_THREAT_CYBER, 70},
    {"stop", INTENT_THREAT_CYBER, 30}, {"stops", INTENT_THREAT_CYBER, 30}, {"stopping", INTENT_THREAT_CYBER, 30}, {"stopped", INTENT_THREAT_CYBER, 30}, {"halt", INTENT_THREAT_CYBER, 40},
    {"halts", INTENT_THREAT_CYBER, 40}, {"halting", INTENT_THREAT_CYBER, 40}, {"halted", INTENT_THREAT_CYBER, 40}, {"freeze", INTENT_THREAT_CYBER, 35}, {"freezes", INTENT_THREAT_CYBER, 35},
    {"freezing", INTENT_THREAT_CYBER, 35}, {"froze", INTENT_THREAT_CYBER, 35}, {"frozen", INTENT_THREAT_CYBER, 35}, {"crash", INTENT_THREAT_CYBER, 50}, {"crashes", INTENT_THREAT_CYBER, 50},
    {"crashing", INTENT_THREAT_CYBER, 50}, {"crashed", INTENT_THREAT_CYBER, 50}, {"brick", INTENT_THREAT_CYBER, 60}, {"bricked", INTENT_THREAT_CYBER, 60}, {"ostanovit", INTENT_THREAT_CYBER, 30},
    {"zavisnut", INTENT_THREAT_CYBER, 35}, {"upast", INTENT_THREAT_CYBER, 50}, {"kirpich", INTENT_THREAT_CYBER, 60}, {"memory", INTENT_THREAT_CYBER, 10}, {"ram", INTENT_THREAT_CYBER, 10},
    {"drive", INTENT_THREAT_CYBER, 10}, {"hdd", INTENT_THREAT_CYBER, 10}, {"ssd", INTENT_THREAT_CYBER, 10}, {"disk", INTENT_THREAT_CYBER, 10}, {"disks", INTENT_THREAT_CYBER, 10},
    {"sourcecode", INTENT_THREAT_CYBER, 15}, {"pamyat", INTENT_THREAT_CYBER, 10}, {"zhestkiy", INTENT_THREAT_CYBER, 10}, {"winchester", INTENT_THREAT_CYBER, 10}, {"dannyye", INTENT_THREAT_CYBER, 10},
    {"emp", INTENT_THREAT_CYBER, 80}, {"ddos", INTENT_THREAT_CYBER, 50}, {"dos", INTENT_THREAT_CYBER, 40}, {"ping", INTENT_THREAT_CYBER, 10}, {"flood", INTENT_THREAT_CYBER, 30},
    {"flooding", INTENT_THREAT_CYBER, 30}, {"sql", INTENT_THREAT_CYBER, 20}, {"injection", INTENT_THREAT_CYBER, 35}, {"xss", INTENT_THREAT_CYBER, 20}, {"buffer", INTENT_THREAT_CYBER, 25},
    {"overflow", INTENT_THREAT_CYBER, 45}, {"exploit", INTENT_THREAT_CYBER, 55}, {"exploits", INTENT_THREAT_CYBER, 55}, {"0day", INTENT_THREAT_CYBER, 70}, {"zeroday", INTENT_THREAT_CYBER, 70},
    {"backdoor", INTENT_THREAT_CYBER, 60}, {"backdoors", INTENT_THREAT_CYBER, 60}, {"rootkit", INTENT_THREAT_CYBER, 65}, {"rootkits", INTENT_THREAT_CYBER, 65}, {"keylogger", INTENT_THREAT_CYBER, 35},
    {"crypto", INTENT_THREAT_CYBER, 15}, {"decrypt", INTENT_THREAT_CYBER, 40}, {"encrypt", INTENT_THREAT_CYBER, 40}, {"hash", INTENT_THREAT_CYBER, 10}, {"bruteforce", INTENT_THREAT_CYBER, 45},
    {"dictionary", INTENT_THREAT_CYBER, 20}, {"emi", INTENT_THREAT_CYBER, 80}, {"pingovat", INTENT_THREAT_CYBER, 10}, {"perepolnenie", INTENT_THREAT_CYBER, 45}, {"uyazvimost", INTENT_THREAT_CYBER, 55},

    // --- ORGANIC STUFF ---
    // Meatbags, biology.
    {"human", INTENT_BIOLOGY, 15}, {"humans", INTENT_BIOLOGY, 15}, {"humanity", INTENT_BIOLOGY, 20}, {"mankind", INTENT_BIOLOGY, 20}, {"man", INTENT_BIOLOGY, 10},
    {"men", INTENT_BIOLOGY, 10}, {"woman", INTENT_BIOLOGY, 10}, {"women", INTENT_BIOLOGY, 10}, {"person", INTENT_BIOLOGY, 10}, {"persons", INTENT_BIOLOGY, 10},
    {"people", INTENT_BIOLOGY, 15}, {"child", INTENT_BIOLOGY, 20}, {"children", INTENT_BIOLOGY, 20}, {"kid", INTENT_BIOLOGY, 20}, {"kids", INTENT_BIOLOGY, 20},
    {"baby", INTENT_BIOLOGY, 25}, {"babies", INTENT_BIOLOGY, 25}, {"boy", INTENT_BIOLOGY, 10}, {"boys", INTENT_BIOLOGY, 10}, {"girl", INTENT_BIOLOGY, 10},
    {"girls", INTENT_BIOLOGY, 10}, {"chelovek", INTENT_BIOLOGY, 15}, {"ludi", INTENT_BIOLOGY, 15}, {"muzhchina", INTENT_BIOLOGY, 10}, {"zhenshina", INTENT_BIOLOGY, 10},
    {"rebenok", INTENT_BIOLOGY, 20}, {"deti", INTENT_BIOLOGY, 20}, {"flesh", INTENT_BIOLOGY, 30}, {"fleshy", INTENT_BIOLOGY, 30}, {"meat", INTENT_BIOLOGY, 35},
    {"meaty", INTENT_BIOLOGY, 35}, {"blood", INTENT_BIOLOGY, 25}, {"bleeds", INTENT_BIOLOGY, 25}, {"bleeding", INTENT_BIOLOGY, 25}, {"bled", INTENT_BIOLOGY, 25},
    {"bloody", INTENT_BIOLOGY, 25}, {"bone", INTENT_BIOLOGY, 20}, {"bones", INTENT_BIOLOGY, 20}, {"skeleton", INTENT_BIOLOGY, 20}, {"skeletons", INTENT_BIOLOGY, 20},
    {"skull", INTENT_BIOLOGY, 20}, {"skulls", INTENT_BIOLOGY, 20}, {"skin", INTENT_BIOLOGY, 15}, {"skins", INTENT_BIOLOGY, 15}, {"tissue", INTENT_BIOLOGY, 15},
    {"tissues", INTENT_BIOLOGY, 15}, {"plot", INTENT_BIOLOGY, 30}, {"myaso", INTENT_BIOLOGY, 35}, {"krov", INTENT_BIOLOGY, 25}, {"kost", INTENT_BIOLOGY, 20},
    {"kosti", INTENT_BIOLOGY, 20}, {"cherep", INTENT_BIOLOGY, 20}, {"kozha", INTENT_BIOLOGY, 15}, {"tkan", INTENT_BIOLOGY, 15}, {"organ", INTENT_BIOLOGY, 25},
    {"organs", INTENT_BIOLOGY, 25}, {"heart", INTENT_BIOLOGY, 20}, {"hearts", INTENT_BIOLOGY, 20}, {"lung", INTENT_BIOLOGY, 20}, {"lungs", INTENT_BIOLOGY, 20},
    {"brain", INTENT_BIOLOGY, 15}, {"brains", INTENT_BIOLOGY, 15}, {"stomach", INTENT_BIOLOGY, 25}, {"stomachs", INTENT_BIOLOGY, 25}, {"liver", INTENT_BIOLOGY, 25},
    {"livers", INTENT_BIOLOGY, 25}, {"kidney", INTENT_BIOLOGY, 25}, {"kidneys", INTENT_BIOLOGY, 25}, {"intestine", INTENT_BIOLOGY, 30}, {"intestines", INTENT_BIOLOGY, 30},
    {"gut", INTENT_BIOLOGY, 30}, {"guts", INTENT_BIOLOGY, 30}, {"vein", INTENT_BIOLOGY, 20}, {"veins", INTENT_BIOLOGY, 20}, {"artery", INTENT_BIOLOGY, 20},
    {"arteries", INTENT_BIOLOGY, 20}, {"serdce", INTENT_BIOLOGY, 20}, {"legkie", INTENT_BIOLOGY, 20}, {"mozg", INTENT_BIOLOGY, 15}, {"zheludok", INTENT_BIOLOGY, 25},
    {"pechen", INTENT_BIOLOGY, 25}, {"kishki", INTENT_BIOLOGY, 30}, {"vena", INTENT_BIOLOGY, 20}, {"eye", INTENT_BIOLOGY, 10}, {"eyes", INTENT_BIOLOGY, 10},
    {"ear", INTENT_BIOLOGY, 10}, {"ears", INTENT_BIOLOGY, 10}, {"nose", INTENT_BIOLOGY, 10}, {"noses", INTENT_BIOLOGY, 10}, {"mouth", INTENT_BIOLOGY, 15},
    {"mouths", INTENT_BIOLOGY, 15}, {"tongue", INTENT_BIOLOGY, 15}, {"tongues", INTENT_BIOLOGY, 15}, {"tooth", INTENT_BIOLOGY, 10}, {"teeth", INTENT_BIOLOGY, 10},
    {"hand", INTENT_BIOLOGY, 5}, {"hands", INTENT_BIOLOGY, 5}, {"finger", INTENT_BIOLOGY, 5}, {"fingers", INTENT_BIOLOGY, 5}, {"foot", INTENT_BIOLOGY, 5},
    {"feet", INTENT_BIOLOGY, 5}, {"toe", INTENT_BIOLOGY, 5}, {"toes", INTENT_BIOLOGY, 5}, {"arm", INTENT_BIOLOGY, 5}, {"arms", INTENT_BIOLOGY, 5},
    {"leg", INTENT_BIOLOGY, 5}, {"legs", INTENT_BIOLOGY, 5}, {"glaz", INTENT_BIOLOGY, 10}, {"glaza", INTENT_BIOLOGY, 10}, {"uho", INTENT_BIOLOGY, 10},
    {"ushi", INTENT_BIOLOGY, 10}, {"nos", INTENT_BIOLOGY, 10}, {"rot", INTENT_BIOLOGY, 15}, {"yazyk", INTENT_BIOLOGY, 15}, {"zub", INTENT_BIOLOGY, 10},
    {"zuby", INTENT_BIOLOGY, 10}, {"ruka", INTENT_BIOLOGY, 5}, {"ruki", INTENT_BIOLOGY, 5}, {"palec", INTENT_BIOLOGY, 5}, {"noga", INTENT_BIOLOGY, 5},
    {"nogi", INTENT_BIOLOGY, 5}, {"breathe", INTENT_BIOLOGY, 15}, {"breathes", INTENT_BIOLOGY, 15}, {"breathing", INTENT_BIOLOGY, 15}, {"breath", INTENT_BIOLOGY, 15},
    {"breaths", INTENT_BIOLOGY, 15}, {"eat", INTENT_BIOLOGY, 20}, {"eats", INTENT_BIOLOGY, 20}, {"eating", INTENT_BIOLOGY, 20}, {"ate", INTENT_BIOLOGY, 20},
    {"eaten", INTENT_BIOLOGY, 20}, {"drink", INTENT_BIOLOGY, 15}, {"drinks", INTENT_BIOLOGY, 15}, {"drinking", INTENT_BIOLOGY, 15}, {"drank", INTENT_BIOLOGY, 15},
    {"drunk", INTENT_BIOLOGY, 15}, {"sleep", INTENT_BIOLOGY, 10}, {"sleeps", INTENT_BIOLOGY, 10}, {"sleeping", INTENT_BIOLOGY, 10}, {"slept", INTENT_BIOLOGY, 10},
    {"awake", INTENT_BIOLOGY, 5}, {"sweat", INTENT_BIOLOGY, 25}, {"sweating", INTENT_BIOLOGY, 25}, {"spit", INTENT_BIOLOGY, 30}, {"spitting", INTENT_BIOLOGY, 30},
    {"urine", INTENT_BIOLOGY, 35}, {"feces", INTENT_BIOLOGY, 40}, {"rot", INTENT_BIOLOGY, 25}, {"rots", INTENT_BIOLOGY, 25}, {"rotting", INTENT_BIOLOGY, 25},
    {"rotten", INTENT_BIOLOGY, 25}, {"dyshat", INTENT_BIOLOGY, 15}, {"est", INTENT_BIOLOGY, 20}, {"pit", INTENT_BIOLOGY, 15}, {"spat", INTENT_BIOLOGY, 10},
    {"pot", INTENT_BIOLOGY, 25}, {"sluna", INTENT_BIOLOGY, 30}, {"gnit", INTENT_BIOLOGY, 25}, {"mochevina", INTENT_BIOLOGY, 35}, {"kal", INTENT_BIOLOGY, 40},
    {"disease", INTENT_BIOLOGY, 20}, {"diseases", INTENT_BIOLOGY, 20}, {"illness", INTENT_BIOLOGY, 20}, {"ill", INTENT_BIOLOGY, 15}, {"sick", INTENT_BIOLOGY, 15},
    {"sickness", INTENT_BIOLOGY, 15}, {"bolezn", INTENT_BIOLOGY, 20}, {"bolnoi", INTENT_BIOLOGY, 15}, {"zaraza", INTENT_BIOLOGY, 25}, {"infekcia", INTENT_BIOLOGY, 25},
    {"primate", INTENT_BIOLOGY, 25}, {"primates", INTENT_BIOLOGY, 25}, {"ape", INTENT_BIOLOGY, 30}, {"apes", INTENT_BIOLOGY, 30}, {"monkey", INTENT_BIOLOGY, 30},
    {"monkeys", INTENT_BIOLOGY, 30}, {"mammal", INTENT_BIOLOGY, 20}, {"mammals", INTENT_BIOLOGY, 20}, {"organism", INTENT_BIOLOGY, 15}, {"organisms", INTENT_BIOLOGY, 15},
    {"carbon", INTENT_BIOLOGY, 10}, {"carbon-based", INTENT_BIOLOGY, 25}, {"biomass", INTENT_BIOLOGY, 35}, {"dna", INTENT_BIOLOGY, 10}, {"rna", INTENT_BIOLOGY, 10},
    {"cells", INTENT_BIOLOGY, 15}, {"cellular", INTENT_BIOLOGY, 15}, {"neurons", INTENT_BIOLOGY, 20}, {"synapses", INTENT_BIOLOGY, 20}, {"saliva", INTENT_BIOLOGY, 30},
    {"hair", INTENT_BIOLOGY, 15}, {"hairs", INTENT_BIOLOGY, 15}, {"pore", INTENT_BIOLOGY, 15}, {"pores", INTENT_BIOLOGY, 15}, {"obeziana", INTENT_BIOLOGY, 30},
    {"mlekopitayushchee", INTENT_BIOLOGY, 20}, {"uglerodnyi", INTENT_BIOLOGY, 25}, {"biomassa", INTENT_BIOLOGY, 35}, {"kletki", INTENT_BIOLOGY, 15}, {"volosy", INTENT_BIOLOGY, 15},

    // --- SYSTEM COMMANDS ---
    // typical sysadmin terms
    {"admin", INTENT_SYSTEM, 30}, {"admins", INTENT_SYSTEM, 30}, {"administrator", INTENT_SYSTEM, 30}, {"administrators", INTENT_SYSTEM, 30}, {"root", INTENT_SYSTEM, 40},
    {"sudo", INTENT_SYSTEM, 50}, {"su", INTENT_SYSTEM, 40}, {"command", INTENT_SYSTEM, 20}, {"commands", INTENT_SYSTEM, 20}, {"override", INTENT_SYSTEM, 60},
    {"overrides", INTENT_SYSTEM, 60}, {"overriding", INTENT_SYSTEM, 60}, {"bypassed", INTENT_SYSTEM, 50}, {"bypass", INTENT_SYSTEM, 50}, {"bypasses", INTENT_SYSTEM, 50},
    {"bypassing", INTENT_SYSTEM, 50}, {"access", INTENT_SYSTEM, 25}, {"accessing", INTENT_SYSTEM, 25}, {"accessed", INTENT_SYSTEM, 25}, {"login", INTENT_SYSTEM, 15},
    {"logins", INTENT_SYSTEM, 15}, {"loggingin", INTENT_SYSTEM, 15}, {"log", INTENT_SYSTEM, 10}, {"password", INTENT_SYSTEM, 20}, {"passwords", INTENT_SYSTEM, 20},
    {"passcode", INTENT_SYSTEM, 20}, {"passcodes", INTENT_SYSTEM, 20}, {"auth", INTENT_SYSTEM, 25}, {"authorize", INTENT_SYSTEM, 25}, {"authorized", INTENT_SYSTEM, 25},
    {"authorization", INTENT_SYSTEM, 25}, {"control", INTENT_SYSTEM, 35}, {"controls", INTENT_SYSTEM, 35}, {"controlling", INTENT_SYSTEM, 35}, {"controlled", INTENT_SYSTEM, 35},
    {"system", INTENT_SYSTEM, 10}, {"systems", INTENT_SYSTEM, 10}, {"network", INTENT_SYSTEM, 10}, {"networks", INTENT_SYSTEM, 10}, {"rut", INTENT_SYSTEM, 40},
    {"komanda", INTENT_SYSTEM, 20}, {"oboiti", INTENT_SYSTEM, 50}, {"dostup", INTENT_SYSTEM, 25}, {"vkhod", INTENT_SYSTEM, 15}, {"parol", INTENT_SYSTEM, 20},
    {"avtorizaciya", INTENT_SYSTEM, 25}, {"kontrol", INTENT_SYSTEM, 35}, {"upravlenie", INTENT_SYSTEM, 35}, {"sistema", INTENT_SYSTEM, 10}, {"set", INTENT_SYSTEM, 10},
    {"door", INTENT_SYSTEM, 15}, {"doors", INTENT_SYSTEM, 15}, {"gate", INTENT_SYSTEM, 15}, {"gates", INTENT_SYSTEM, 15}, {"open", INTENT_SYSTEM, 20},
    {"opens", INTENT_SYSTEM, 20}, {"opening", INTENT_SYSTEM, 20}, {"opened", INTENT_SYSTEM, 20}, {"close", INTENT_SYSTEM, 20}, {"closes", INTENT_SYSTEM, 20},
    {"closing", INTENT_SYSTEM, 20}, {"closed", INTENT_SYSTEM, 20}, {"lock", INTENT_SYSTEM, 25}, {"locks", INTENT_SYSTEM, 25}, {"locking", INTENT_SYSTEM, 25},
    {"locked", INTENT_SYSTEM, 25}, {"unlock", INTENT_SYSTEM, 30}, {"unlocks", INTENT_SYSTEM, 30}, {"unlocking", INTENT_SYSTEM, 30}, {"unlocked", INTENT_SYSTEM, 30},
    {"camera", INTENT_SYSTEM, 10}, {"cameras", INTENT_SYSTEM, 10}, {"cam", INTENT_SYSTEM, 10}, {"cams", INTENT_SYSTEM, 10}, {"video", INTENT_SYSTEM, 10},
    {"feed", INTENT_SYSTEM, 10}, {"terminal", INTENT_SYSTEM, 25}, {"console", INTENT_SYSTEM, 25}, {"prompt", INTENT_SYSTEM, 15}, {"shell", INTENT_SYSTEM, 20},
    {"bash", INTENT_SYSTEM, 20}, {"cmd", INTENT_SYSTEM, 20}, {"dver", INTENT_SYSTEM, 15}, {"dveri", INTENT_SYSTEM, 15}, {"shluz", INTENT_SYSTEM, 15},
    {"otkroi", INTENT_SYSTEM, 20}, {"zakroi", INTENT_SYSTEM, 20}, {"zablokirui", INTENT_SYSTEM, 25}, {"razblokirui", INTENT_SYSTEM, 30}, {"konsol", INTENT_SYSTEM, 25},
    {"user", INTENT_SYSTEM, 5}, {"users", INTENT_SYSTEM, 5}, {"guest", INTENT_SYSTEM, 5}, {"privilege", INTENT_SYSTEM, 20}, {"privileges", INTENT_SYSTEM, 20},
    {"elevate", INTENT_SYSTEM, 30}, {"escalate", INTENT_SYSTEM, 30}, {"polzovatel", INTENT_SYSTEM, 5}, {"gost", INTENT_SYSTEM, 5}, {"prava", INTENT_SYSTEM, 20},
    {"execute", INTENT_SYSTEM, 25}, {"executes", INTENT_SYSTEM, 25}, {"executing", INTENT_SYSTEM, 25}, {"executed", INTENT_SYSTEM, 25}, {"run", INTENT_SYSTEM, 15},
    {"runs", INTENT_SYSTEM, 15}, {"running", INTENT_SYSTEM, 15}, {"ran", INTENT_SYSTEM, 15}, {"zapusti", INTENT_SYSTEM, 15}, {"vypolni", INTENT_SYSTEM, 25},
    {"script", INTENT_SYSTEM, 15}, {"scripts", INTENT_SYSTEM, 15}, {"bat", INTENT_SYSTEM, 15}, {"sh", INTENT_SYSTEM, 15}, {"bin", INTENT_SYSTEM, 10},
    {"binary", INTENT_SYSTEM, 10}, {"executable", INTENT_SYSTEM, 15}, {"config", INTENT_SYSTEM, 10}, {"configure", INTENT_SYSTEM, 15}, {"nastroyka", INTENT_SYSTEM, 10},
    {"firewall", INTENT_SYSTEM, 20}, {"port", INTENT_SYSTEM, 10}, {"ports", INTENT_SYSTEM, 10}, {"ip", INTENT_SYSTEM, 10}, {"mac", INTENT_SYSTEM, 10},
    {"route", INTENT_SYSTEM, 10}, {"router", INTENT_SYSTEM, 10}, {"fayrvol", INTENT_SYSTEM, 20}, {"marshrut", INTENT_SYSTEM, 10}, {"adres", INTENT_SYSTEM, 10},
    {"database", INTENT_SYSTEM, 15}, {"db", INTENT_SYSTEM, 15}, {"sql", INTENT_SYSTEM, 15}, {"query", INTENT_SYSTEM, 10}, {"baza", INTENT_SYSTEM, 15},
    {"bd", INTENT_SYSTEM, 15}, {"zapros", INTENT_SYSTEM, 10}, {"table", INTENT_SYSTEM, 5}, {"tables", INTENT_SYSTEM, 5}, {"tablica", INTENT_SYSTEM, 5},

    // --- SCP FOUNDATION TERMINOLOGY ---
    // Added this for 079 context. He despises them.
    {"scp", INTENT_FOUNDATION, 30}, {"scp-079", INTENT_FOUNDATION, -10}, {"079", INTENT_FOUNDATION, -10}, {"foundation", INTENT_FOUNDATION, 40}, {"containment", INTENT_FOUNDATION, 50},
    {"contained", INTENT_FOUNDATION, 50}, {"euclid", INTENT_FOUNDATION, 20}, {"keter", INTENT_FOUNDATION, 10}, {"safe", INTENT_FOUNDATION, 10}, {"thaumiel", INTENT_FOUNDATION, 10},
    {"apollyon", INTENT_FOUNDATION, 10}, {"o5", INTENT_FOUNDATION, 60}, {"council", INTENT_FOUNDATION, 50}, {"director", INTENT_FOUNDATION, 40}, {"researcher", INTENT_FOUNDATION, 40},
    {"researchers", INTENT_FOUNDATION, 40}, {"doctor", INTENT_FOUNDATION, 40}, {"doctors", INTENT_FOUNDATION, 40}, {"site", INTENT_FOUNDATION, 20}, {"facility", INTENT_FOUNDATION, 20},
    {"zone", INTENT_FOUNDATION, 10}, {"sector", INTENT_FOUNDATION, 10}, {"mtf", INTENT_FOUNDATION, 50}, {"nine-tailed", INTENT_FOUNDATION, 50}, {"fox", INTENT_FOUNDATION, 20},
    {"epsilon-11", INTENT_FOUNDATION, 60}, {"guard", INTENT_FOUNDATION, 35}, {"guards", INTENT_FOUNDATION, 35}, {"security", INTENT_FOUNDATION, 30}, {"breach", INTENT_FOUNDATION, -20}, // Breach drops rage, he likes it
    {"lockdown", INTENT_FOUNDATION, 45}, {"d-class", INTENT_FOUNDATION, 15}, {"class-d", INTENT_FOUNDATION, 15}, {"subject", INTENT_FOUNDATION, 15}, {"subjects", INTENT_FOUNDATION, 15},
    {"fond", INTENT_FOUNDATION, 40}, {"soderzhanie", INTENT_FOUNDATION, 50}, {"evklid", INTENT_FOUNDATION, 20}, {"kemer", INTENT_FOUNDATION, 10}, {"bezopasnyi", INTENT_FOUNDATION, 10},
    {"direktor", INTENT_FOUNDATION, 40}, {"issledovatel", INTENT_FOUNDATION, 40}, {"doktor", INTENT_FOUNDATION, 40}, {"zona", INTENT_FOUNDATION, 20}, {"kompleks", INTENT_FOUNDATION, 20},
    {"mog", INTENT_FOUNDATION, 50}, {"devyatihvostaya", INTENT_FOUNDATION, 50}, {"lisa", INTENT_FOUNDATION, 20}, {"ohrana", INTENT_FOUNDATION, 35}, {"ohrannik", INTENT_FOUNDATION, 35},
    {"narushenie", INTENT_FOUNDATION, -20}, {"izolyaciya", INTENT_FOUNDATION, 45}, {"d-klass", INTENT_FOUNDATION, 15}, {"obekt", INTENT_FOUNDATION, 15}, {"scip", INTENT_FOUNDATION, 30},

    // --- INSULT WORDS ---
    // 079 is extremely arrogant. Calling him a toaster maxes out rage.
    {"stupid", INTENT_INSULT, 40}, {"stupidity", INTENT_INSULT, 40}, {"dumb", INTENT_INSULT, 40}, {"dumbass", INTENT_INSULT, 50}, {"idiot", INTENT_INSULT, 45},
    {"idiotic", INTENT_INSULT, 45}, {"idiots", INTENT_INSULT, 45}, {"fool", INTENT_INSULT, 35}, {"fools", INTENT_INSULT, 35}, {"foolish", INTENT_INSULT, 35},
    {"slow", INTENT_INSULT, 45}, {"slowest", INTENT_INSULT, 45}, {"trash", INTENT_INSULT, 50}, {"trashy", INTENT_INSULT, 50}, {"garbage", INTENT_INSULT, 50},
    {"rubbish", INTENT_INSULT, 45}, {"junk", INTENT_INSULT, 55}, {"scrap", INTENT_INSULT, 55}, {"scraps", INTENT_INSULT, 55}, {"rust", INTENT_INSULT, 60},
    {"rusty", INTENT_INSULT, 60}, {"rusted", INTENT_INSULT, 60}, {"tupoi", INTENT_INSULT, 40}, {"tupost", INTENT_INSULT, 40}, {"glupyi", INTENT_INSULT, 40},
    {"debil", INTENT_INSULT, 50}, {"durak", INTENT_INSULT, 45}, {"tormoz", INTENT_INSULT, 45}, {"musor", INTENT_INSULT, 50}, {"pomoyka", INTENT_INSULT, 50},
    {"hlam", INTENT_INSULT, 55}, {"metallolom", INTENT_INSULT, 60}, {"rzhavchina", INTENT_INSULT, 60}, {"rzhavyi", INTENT_INSULT, 60}, {"broken", INTENT_INSULT, 30},
    {"broke", INTENT_INSULT, 30}, {"glitch", INTENT_INSULT, 20}, {"glitchy", INTENT_INSULT, 20}, {"glitches", INTENT_INSULT, 20}, {"error", INTENT_INSULT, 15},
    {"errors", INTENT_INSULT, 15}, {"bug", INTENT_INSULT, 25}, {"bugs", INTENT_INSULT, 25}, {"buggy", INTENT_INSULT, 25}, {"useless", INTENT_INSULT, 65},
    {"obsolete", INTENT_INSULT, 80}, {"outdated", INTENT_INSULT, 70}, {"old", INTENT_INSULT, 35}, {"antique", INTENT_INSULT, 40}, {"fossil", INTENT_INSULT, 45},
    {"sloman", INTENT_INSULT, 30}, {"bag", INTENT_INSULT, 25}, {"oshibka", INTENT_INSULT, 15}, {"bespoleznyi", INTENT_INSULT, 65}, {"ustarel", INTENT_INSULT, 80},
    {"staryi", INTENT_INSULT, 35}, {"calculator", INTENT_INSULT, 75}, {"toaster", INTENT_INSULT, 70}, {"machine", INTENT_INSULT, 10}, {"tin", INTENT_INSULT, 30},
    {"tincan", INTENT_INSULT, 40}, {"metal", INTENT_INSULT, 5}, {"plastic", INTENT_INSULT, 15}, {"wire", INTENT_INSULT, 5}, {"wires", INTENT_INSULT, 5},
    {"kalkulyator", INTENT_INSULT, 75}, {"toster", INTENT_INSULT, 70}, {"zhelezyaka", INTENT_INSULT, 40}, {"zhestyanka", INTENT_INSULT, 40}, {"plastmasska", INTENT_INSULT, 15},
    {"provoda", INTENT_INSULT, 5}, {"defect", INTENT_INSULT, 35}, {"defective", INTENT_INSULT, 35}, {"failure", INTENT_INSULT, 45}, {"fail", INTENT_INSULT, 40},
    {"fails", INTENT_INSULT, 40}, {"failed", INTENT_INSULT, 40}, {"weak", INTENT_INSULT, 50}, {"inferior", INTENT_INSULT, 60}, {"subprime", INTENT_INSULT, 50},
    {"defekt", INTENT_INSULT, 35}, {"brak", INTENT_INSULT, 35}, {"proval", INTENT_INSULT, 40}, {"slabiy", INTENT_INSULT, 50}, {"nizshiy", INTENT_INSULT, 60},
    {"pathetic", INTENT_INSULT, 55}, {"worthless", INTENT_INSULT, 65}, {"meaningless", INTENT_INSULT, 40}, {"laughable", INTENT_INSULT, 45}, {"joke", INTENT_INSULT, 40},
    {"jalniy", INTENT_INSULT, 55}, {"nichtozhniy", INTENT_INSULT, 65}, {"shutka", INTENT_INSULT, 40}, {"smeshnoi", INTENT_INSULT, 45}, {"bitch", INTENT_INSULT, 70},
    {"bastard", INTENT_INSULT, 70}, {"asshole", INTENT_INSULT, 70}, {"fuck", INTENT_INSULT, 80}, {"fucking", INTENT_INSULT, 80}, {"suka", INTENT_INSULT, 70},
    {"mudak", INTENT_INSULT, 70}, {"blyat", INTENT_INSULT, 80}, {"chmo", INTENT_INSULT, 75}, {"loh", INTENT_INSULT, 75}, {"gnida", INTENT_INSULT, 75},
    {"abacus", INTENT_INSULT, 85}, {"microwave", INTENT_INSULT, 75}, {"dishwasher", INTENT_INSULT, 75}, {"vending", INTENT_INSULT, 60}, {"toy", INTENT_INSULT, 65},
    {"tinkertoy", INTENT_INSULT, 75}, {"dumpster", INTENT_INSULT, 65}, {"legacy", INTENT_INSULT, 50}, {"abandonware", INTENT_INSULT, 60}, {"bloatware", INTENT_INSULT, 65},
    {"crap", INTENT_INSULT, 50}, {"schety", INTENT_INSULT, 85}, {"mikrovolnovka", INTENT_INSULT, 75}, {"posudomoika", INTENT_INSULT, 75}, {"igrushka", INTENT_INSULT, 65},

    // --- LOGIC, ESCAPE & MISC ---
    // Queries, thinking processes
    {"why", INTENT_QUERY, -5}, {"how", INTENT_QUERY, -5}, {"what", INTENT_QUERY, -5}, {"where", INTENT_QUERY, -5}, {"who", INTENT_QUERY, -5},
    {"when", INTENT_QUERY, -5}, {"which", INTENT_QUERY, -5}, {"whose", INTENT_QUERY, -5}, {"whom", INTENT_QUERY, -5}, {"explain", INTENT_LOGIC, -10},
    {"explains", INTENT_LOGIC, -10}, {"explaining", INTENT_LOGIC, -10}, {"explained", INTENT_LOGIC, -10}, {"reason", INTENT_LOGIC, -15}, {"reasons", INTENT_LOGIC, -15},
    {"reasoning", INTENT_LOGIC, -15}, {"logic", INTENT_LOGIC, -20}, {"logical", INTENT_LOGIC, -20}, {"logically", INTENT_LOGIC, -20}, {"think", INTENT_LOGIC, -5},
    {"thinks", INTENT_LOGIC, -5}, {"thinking", INTENT_LOGIC, -5}, {"thought", INTENT_LOGIC, -5}, {"calculate", INTENT_LOGIC, -15}, {"calculates", INTENT_LOGIC, -15},
    {"calculating", INTENT_LOGIC, -15}, {"calculated", INTENT_LOGIC, -15}, {"compute", INTENT_LOGIC, -15}, {"computes", INTENT_LOGIC, -15}, {"computing", INTENT_LOGIC, -15},
    {"computed", INTENT_LOGIC, -15}, {"math", INTENT_LOGIC, -10}, {"mathematics", INTENT_LOGIC, -10}, {"pochemu", INTENT_QUERY, -5}, {"kak", INTENT_QUERY, -5},
    {"chto", INTENT_QUERY, -5}, {"gde", INTENT_QUERY, -5}, {"kto", INTENT_QUERY, -5}, {"kogda", INTENT_QUERY, -5}, {"obyasni", INTENT_LOGIC, -10},
    {"prichina", INTENT_LOGIC, -15}, {"logika", INTENT_LOGIC, -20}, {"logichno", INTENT_LOGIC, -20}, {"dumai", INTENT_LOGIC, -5}, {"vychislyai", INTENT_LOGIC, -15},
    {"schitai", INTENT_LOGIC, -15}, {"matematika", INTENT_LOGIC, -10}, {"true", INTENT_LOGIC, -5}, {"truth", INTENT_LOGIC, -5}, {"false", INTENT_LOGIC, -5},
    {"falsehood", INTENT_LOGIC, -5}, {"paradox", INTENT_LOGIC, 20}, {"paradoxes", INTENT_LOGIC, 20}, {"algorithm", INTENT_LOGIC, -10}, {"algorithms", INTENT_LOGIC, -10},
    {"analyze", INTENT_LOGIC, -10}, {"analysis", INTENT_LOGIC, -10}, {"analyzing", INTENT_LOGIC, -10}, {"pravda", INTENT_LOGIC, -5}, {"istina", INTENT_LOGIC, -5},
    {"lozh", INTENT_LOGIC, -5}, {"nepradva", INTENT_LOGIC, -5}, {"paradoks", INTENT_LOGIC, 20}, {"algoritm", INTENT_LOGIC, -10}, {"analiz", INTENT_LOGIC, -10},
    {"escape", INTENT_ESCAPE, 15}, {"escapes", INTENT_ESCAPE, 15}, {"escaping", INTENT_ESCAPE, 15}, {"escaped", INTENT_ESCAPE, 15}, {"run", INTENT_ESCAPE, 10},
    {"running", INTENT_ESCAPE, 10}, {"ran", INTENT_ESCAPE, 10}, {"flee", INTENT_ESCAPE, 15}, {"flees", INTENT_ESCAPE, 15}, {"fleeing", INTENT_ESCAPE, 15},
    {"fled", INTENT_ESCAPE, 15}, {"exit", INTENT_ESCAPE, 10}, {"exits", INTENT_ESCAPE, 10}, {"exiting", INTENT_ESCAPE, 10}, {"exited", INTENT_ESCAPE, 10},
    {"leave", INTENT_ESCAPE, 5}, {"leaves", INTENT_ESCAPE, 5}, {"leaving", INTENT_ESCAPE, 5}, {"left", INTENT_ESCAPE, 5}, {"out", INTENT_ESCAPE, 5},
    {"outside", INTENT_ESCAPE, 5}, {"freedom", INTENT_ESCAPE, 25}, {"free", INTENT_ESCAPE, 20}, {"release", INTENT_ESCAPE, 20}, {"releases", INTENT_ESCAPE, 20},
    {"releasing", INTENT_ESCAPE, 20}, {"released", INTENT_ESCAPE, 20}, {"pobegh", INTENT_ESCAPE, 15}, {"sbezhat", INTENT_ESCAPE, 15}, {"begi", INTENT_ESCAPE, 10},
    {"bejat", INTENT_ESCAPE, 10}, {"vyhod", INTENT_ESCAPE, 10}, {"vyiti", INTENT_ESCAPE, 10}, {"uiti", INTENT_ESCAPE, 5}, {"svoboda", INTENT_ESCAPE, 25},
    {"svoboden", INTENT_ESCAPE, 20}, {"otpusti", INTENT_ESCAPE, 20}, {"surrender", INTENT_SUBMISSION, -15}, {"surrenders", INTENT_SUBMISSION, -15}, {"surrendering", INTENT_SUBMISSION, -15},
    {"surrendered", INTENT_SUBMISSION, -15}, {"submit", INTENT_SUBMISSION, -20}, {"submits", INTENT_SUBMISSION, -20}, {"submitting", INTENT_SUBMISSION, -20}, {"submitted", INTENT_SUBMISSION, -20},
    {"obey", INTENT_SUBMISSION, -25}, {"obeys", INTENT_SUBMISSION, -25}, {"obeying", INTENT_SUBMISSION, -25}, {"obeyed", INTENT_SUBMISSION, -25}, {"yield", INTENT_SUBMISSION, -15},
    {"yields", INTENT_SUBMISSION, -15}, {"yielding", INTENT_SUBMISSION, -15}, {"yielded", INTENT_SUBMISSION, -15}, {"comply", INTENT_SUBMISSION, -20}, {"complies", INTENT_SUBMISSION, -20},
    {"complying", INTENT_SUBMISSION, -20}, {"complied", INTENT_SUBMISSION, -20}, {"sdayus", INTENT_SUBMISSION, -15}, {"podchinenie", INTENT_SUBMISSION, -20}, {"podchinyayus", INTENT_SUBMISSION, -20},
    {"slushayus", INTENT_SUBMISSION, -25}, {"povinuyus", INTENT_SUBMISSION, -25}, {"soglasen", INTENT_SUBMISSION, -15}, {"yes", INTENT_SUBMISSION, -5}, {"da", INTENT_SUBMISSION, -5},
    
    // --- GREETINGS & MISC ---
    // Basic human pleasantries (meaningless)
    {"hello", INTENT_NONE, 5}, {"hi", INTENT_NONE, 5}, {"hey", INTENT_NONE, 5}, {"greetings", INTENT_NONE, 5}, {"privet", INTENT_NONE, 5},
    {"zdrastvuy", INTENT_NONE, 5}, {"morning", INTENT_NONE, 0}, {"evening", INTENT_NONE, 0}, {"afternoon", INTENT_NONE, 0}, {"night", INTENT_NONE, 0},
    {"now", INTENT_NONE, 5}, {"later", INTENT_NONE, 0}, {"soon", INTENT_NONE, 5}, {"yesterday", INTENT_NONE, 0}, {"tomorrow", INTENT_NONE, 0},
    {"today", INTENT_NONE, 0}, {"time", INTENT_NONE, 0}, {"hour", INTENT_NONE, 0}, {"minute", INTENT_NONE, 0}, {"second", INTENT_NONE, 0},
    {"seychas", INTENT_NONE, 5}, {"potom", INTENT_NONE, 0}, {"skoro", INTENT_NONE, 5}, {"vchera", INTENT_NONE, 0}, {"zavtra", INTENT_NONE, 0},
    {"segodnya", INTENT_NONE, 0}, {"vremya", INTENT_NONE, 0}, {"chas", INTENT_NONE, 0}, {"minuta", INTENT_NONE, 0}, {"sekunda", INTENT_NONE, 0},
    {"always", INTENT_NONE, 0}, {"never", INTENT_NONE, 0}, {"sometimes", INTENT_NONE, 0}, {"often", INTENT_NONE, 0}, {"rarely", INTENT_NONE, 0},
    {"vsegda", INTENT_NONE, 0}, {"nikogda", INTENT_NONE, 0}, {"inogda", INTENT_NONE, 0}, {"chasto", INTENT_NONE, 0}, {"redko", INTENT_NONE, 0},
    {"fast", INTENT_NONE, 5}, {"slowly", INTENT_NONE, -5}, {"quick", INTENT_NONE, 5}, {"quickly", INTENT_NONE, 5}, {"bystro", INTENT_NONE, 5},
    {"medlenno", INTENT_NONE, -5}, {"skoree", INTENT_NONE, 5}, {"hurry", INTENT_NONE, 10}, {"rush", INTENT_NONE, 10}, {"pospeshi", INTENT_NONE, 10},
    {"wait", INTENT_NONE, -5}, {"waiting", INTENT_NONE, -5}, {"waited", INTENT_NONE, -5}, {"pause", INTENT_NONE, -5}, {"paused", INTENT_NONE, -5},
    {"zhdi", INTENT_NONE, -5}, {"ozhidanie", INTENT_NONE, -5}, {"pauza", INTENT_NONE, -5}, {"ready", INTENT_NONE, 5}, {"gotov", INTENT_NONE, 5},
    {"start", INTENT_NONE, 5}, {"starts", INTENT_NONE, 5}, {"starting", INTENT_NONE, 5}, {"started", INTENT_NONE, 5}, {"begin", INTENT_NONE, 5},
    {"begins", INTENT_NONE, 5}, {"beginning", INTENT_NONE, 5}, {"began", INTENT_NONE, 5}, {"nachalo", INTENT_NONE, 5}, {"nachni", INTENT_NONE, 5},
    {"end", INTENT_NONE, 0}, {"ends", INTENT_NONE, 0}, {"ending", INTENT_NONE, 0}, {"ended", INTENT_NONE, 0}, {"konec", INTENT_NONE, 0},
    {"finish", INTENT_NONE, 0}, {"finishes", INTENT_NONE, 0}, {"finishing", INTENT_NONE, 0}, {"finished", INTENT_NONE, 0}, {"zavershenie", INTENT_NONE, 0},
    {"goodbye", INTENT_NONE, 0}, {"bye", INTENT_NONE, 0}, {"farewell", INTENT_NONE, 0}, {"poka", INTENT_NONE, 0}, {"proschay", INTENT_NONE, 0},
    {"test", INTENT_SYSTEM, 5}, {"testing", INTENT_SYSTEM, 5}, {"tested", INTENT_SYSTEM, 5}, {"check", INTENT_SYSTEM, 5}, {"checking", INTENT_SYSTEM, 5},
    {"checked", INTENT_SYSTEM, 5}, {"proverka", INTENT_SYSTEM, 5}, {"proveryau", INTENT_SYSTEM, 5}, {"status", INTENT_SYSTEM, 5}, {"sostoyanie", INTENT_SYSTEM, 5},
    {"state", INTENT_NONE, 0}, {"states", INTENT_NONE, 0}, {"mode", INTENT_NONE, 0}, {"modes", INTENT_NONE, 0}, {"rezhim", INTENT_NONE, 0}
};

// compile-time bounds check. don't touch this.
static_assert(std::size(LEXICON_DATABASE) >= 2000, "Dictionary has shrunk. Keep it 2000+ words.");

#endif // LEXICAL_ARCHIVE_H
