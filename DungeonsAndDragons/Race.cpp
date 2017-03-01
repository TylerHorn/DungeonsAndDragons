#include "stdafx.h"
#include "Race.h"


setRace::setRace()
{
}

//all of the different races will be set here. For some of the inputs like height and weight I didn't do a check
//this is because a player really can make their character whatever size they want, it's up to the dm to give the final okay
void setRace::human(int stats[]) {
	for (int i = 0; i < 6; i++) {
		stats[i] += 1;
	}
	race = "Human";
	raceSize = "Medium";
	speed = 30;
	cout << "Humans reach adulthood in their late teens and live less than a century." << endl;
	cout << endl;
	cout << "Please enter the age: ";
	cin >> age;
	cout << endl;
	cout << "Humans tend toward no particular alignment. The best and the worst are found among them." << endl;
	cout << endl;
	cout << "The average height of a human is between 5 and 6 feet tall." << endl;
	cout << "Please enter the height: ";
	cin >> height;
	cout << endl;

	cout << "Please enter the weight: ";
	cin >> weight;
	cout << endl;
	language.push_back("Common");
	vision = "Normal";
	string langArray[7] = { "Dwarvish","Elvish","Giant","Gnomish","Goblin","Halfling","Orc" };
	cout << endl;
	cout << "Please pick one other language:" << endl;
	cout << "1)Dwarvish" << endl; 
	cout << "2)Elvish" << endl;
	cout << "3)Giant" << endl;
	cout << "4)Gnomish" << endl; 
	cout << "5)Goblin" << endl;
	cout << "6)Halfling" << endl;
	cout << "7)Orc" << endl;
	cin >> langChoice;
	while (langChoice < 0 || langChoice>7) {
		cout << "Error: " << endl;
		cout << endl;
		cout << "Please pick one other language:" << endl;
		cout << "1)Dwarvish" << endl;
		cout << "2)Elvish" << endl;
		cout << "3)Giant" << endl;
		cout << "4)Gnomish" << endl;
		cout << "5)Goblin" << endl;
		cout << "6)Halfling" << endl;
		cout << "7)Orc" << endl;
		cin >> langChoice;
	}
	language.push_back(langArray[langChoice - 1]);
}
void setRace::dwarf(int &con) {
	con += 2;
	raceSize = "Medium";
	speed = 25;
	cout << "Dwarves mature at the same rate as humans, but they're considered young until\n they reach the age of 50. On average they live about 350 years." << endl;
	cout << "Please enter the age: ";
	cin >> age;
	cout << endl;

	cout << "Most dwarves are lawful, believing firmly in the benefits of a well-ordered\n society. They tend toward good as well, with a strong sense of fair play and a\n belief that everyone deserves to share in the benefits of just order." << endl;
	cout << "Dwarves stand between 4 and 5 feet tall and average about 150 pounds." << endl;
	cout << "Please enter the height: ";
	cin >> height;
	cout << endl;

	cout << "Please enter the weight: ";
	cin >> weight;
	cout << endl;
	language.push_back("Common");
	language.push_back("Dwarvish");
	vision = "Darkvision";
	traits += "Dwarven Resiliance: You have advantage on saving throws against poison, and\n have resistance against poison damage\n";
	traits += "Tool Proficiency: You gain proficiency with the artisan's tools of your\n choice: smith's tools, brewer's supplies, or mason's tools.\n";
	wepProf = { "Battleaxe","Handaxe","Throwing Hammer","Warhammer" };

}
void setRace::hillDwarf(int &wis) {
	wis += 1;
	race = "Hill Dwarf";
	traits += "Dwarven Toughness: Your Hit point maximum increases by 1, and it increases by 1 every time you gain a level\n";

}
void setRace::mountainDwarf(int str) {
	race = "Mountain Dwarf";
	str += 2;
	armProf = { "Light","Medium" };
}
void setRace::elf(int dex) {
	dex += 2;
	raceSize = "Medium";
	cout << "Although elves reach physical maturity at about the same age as humans, the elven understanding of adulthood goes beyond physical growth to encompass worldly experience. An elf typically claims adulthood and an adult name around the age of 100 and can live to be about 750 years old." << endl;
	cout << "Please enter the age: ";
	cin >> age;
	cout << endl;
	cout << "Elves love freedom, variety, and selfexpression, so they lean strongly toward the gentler aspects of chaos. They value and protect others freedom as well as their own, and they are more often good than not. The drow are an exception; their exile into Underdark has made them vicious and dangerous. Drow are more often evil than not." << endl;
	cout << endl;
	cout << "Elves range from under 5 to over 6 foot tall and have slender builds." << endl;
	cout << endl;

	cout << "Please enter the height: ";
	cin >> height;
	cout << endl;

	cout << "Please enter the weight: ";
	cin >> weight;
	speed = 30;
	cout << endl;
	vision = "Dark vision";
	language.push_back("Common");
	language.push_back("Elvish");
	traits += "Keen Sense: You have proficiency in the perception skill.\n";
	traits += "Fey Ancestry: You have advantage on saving throws against being charmed,\n and magic can't put you to sleep.\n";
	traits += "Trance: Elves don't need to sleep. Instead, they meditate deeply, remaining semiconscious, for 4 hours a day.\n While meditating, you can dream after a fashion; such dreams are actually mental exercises that have become reflexive through years of practice. After resting in this way, you gain the same benefit that a human does from 8 hours of sleep.\n";

}
void setRace::highElf(int intel) {
	intel += 1;
	race = "High Elf";
	wepProf = { "Longsword","Shortsword","Shortbow","Longbow" };
	traits += "Cantrip: You know one cantrip of your choice from the wizard spell list. Intelligence is your spellcasting abiloity for it.\n";
	traits += "Extra Language: you can speak, read, and write one extra language of your choice.\n";
	string langArray[7] = { "Dwarvish","Elvish","Giant","Gnomish","Goblin","Halfling","Orc" };
	cout << endl;
	cout << "Please pick one other language" << endl;
	cout << "1)Dwarvish" << endl;
	cout << "2)Elvish" << endl;
	cout << "3)Giant" << endl;
	cout << "4)Gnomish" << endl;
	cout << "5)Goblin" << endl;
	cout << "6)Halfling" << endl;
	cout << "7)Orc" << endl;
	cin >> langChoice;
	while (langChoice < 0 || langChoice>7) {
		cout << "Error: " << endl;
		cout << endl;
		cout << "Please pick one other language" << endl;
		cout << "1)Dwarvish" << endl;
		cout << "2)Elvish" << endl;
		cout << "3)Giant" << endl;
		cout << "4)Gnomish" << endl;
		cout << "5)Goblin" << endl;
		cout << "6)Halfling" << endl;
		cout << "7)Orc" << endl;
		cin >> langChoice;
	}
	language.push_back(langArray[langChoice - 1]);
}
void setRace::woodElf(int wis) {
	wis += 1;
	race = "Wood Elf";
	wepProf = { "Longsword","Shortsword","Shortbow","Longbow" };
	traits += "Fleet of Foot: your base walking speed increases to 35 feet.\n";
	speed = 35;
	traits += "You can attempt to hide even when you are only lightly obscured by foliage, heavy rain, falling snow, mist, and other natural phenomena.\n";

}
void setRace::darkElf(int cha) {
	cha += 1;
	race = "Dark Elf";
	wepProf = { "Rapiers","Shortswords","Hand Crossbows" };
	traits += "Superior Darkvision: Your darkvision has a radius of 120 feet.\n";
	traits += "Sunlight Sensitivity: You have disadvantage on attack rolls and on wisdom(perception) checks that rely on sight when you,the target of your attack, or whenever you are trying to perceive is in direct sunlight.\n";
	traits += "Drow Magic: You know the dancing lights cantrip. When you reach 3rd level, you can cast the faerie fire spell once per day. When you reach 5th level, you can also cast the darkness spell once per day. Charisma is your spellcasting ability for these spells.\n";

}
void setRace::halfling(int &dex) {
	dex += 2;
	raceSize = "Small";
	cout << "Halflings average about 3 feet tall and weigh about 40 pounds." << endl;
	cout << endl;
	cout << "Please enter the age: ";
	cin >> age;
	cout << endl;
	cout << "Please enter the height: ";
	cin >> height;
	cout << endl;
	cout << "Please enter the weight: ";
	cin >> weight;
	speed = 25;
	cout << endl;
	vision = "Normal";
	language.push_back("Common");
	language.push_back("Halfling");
	traits += "Lucky: When you roll a 1 on an attack roll, ability check, or saving throw, you can reroll the die and must use the new roll.\n";
	traits += "Brave: You have advantage on saving throws against being frightened.\n";
	traits += "Halfling Nimbleness: You can move through the space of any creature that is of a size larger than yours.\n";

}
void setRace::lightfootHalfling(int &cha) {
	cha += 1;
	race = "Lightfoot Halfling";
	traits += "Naturally Stealthy: you can attempt to hide even when you are obscured only by a creature that is at least one size larger than you.\n";

}
void setRace::stoutHalfling(int &con) {
	con += 1;
	race = "Stout Halfling";
	traits += "You have advantage on saving throws against poison, and you have resistance against poison damage.\n";

}
void setRace::dragonborn(int &str, int& cha) {
	str += 2;
	cha += 1;
	int type;
	string dtypeArray[10] = { "Black","Blue","Brass","Bronze","Copper","Gold","Green","Red","Silver","White" };
	cout << "Please enter dragonborn type" << endl;
	cout << "1)Black" << endl;
	cout << "2)Blue" << endl;
	cout << "3)Brass" << endl;
	cout << "4)Bronze" << endl;
	cout << "5)Copper" << endl;
	cout << "6)Gold" << endl;
	cout << "7)Green" << endl;
	cout << "8)Red" << endl;
	cout << "9)Silver" << endl;
	cout << "10)White" << endl;
	cin >> type;
	cout << endl;
	while (type<1 || type>10) {
		cout << "Error: " << endl;
		cout << "Please enter dragonborn type" << endl;
		cout << "1)Black" << endl;
		cout << "2)Blue" << endl;
		cout << "3)Brass" << endl;
		cout << "4)Bronze" << endl;
		cout << "5)Copper" << endl;
		cout << "6)Gold" << endl;
		cout << "7)Green" << endl;
		cout << "8)Red" << endl;
		cout << "9)Silver" << endl;
		cout << "10)White" << endl;
		cin >> type;
		cout << endl;
	}

	race = "Dragonborn " + dtypeArray[type - 1];
	cout << "Young dragonborn grow quickly. They walk hours after hatching, attain the size and development of a 10-year-old human child by the age of 3, and reach adulthood by 15. The live to be around 80." << endl;
	cout << endl;
	cout << "Please enter the age: ";
	cin >> age;
	cout << endl;
	cout << "Dragonborn tend to extremems, making a conscious choice for one side or the other in the cosmic war between good and evil(represented by Bahamut and Tiamat). Most dragonborn are good, but those who side with Tiamat can be terrible villains." << endl;
	cout << endl;
	cout << "Dragonborn are taller and heavier than humans, standing well over 6 feet tall and averaging almost 250 pounds." << endl;
	cout << "Please enter the height: ";
	cin >> height;
	cout << endl;
	cout << "Please enter the weight: ";
	cin >> weight;
	cout << endl;
	raceSize = "medium";
	speed = 30;
	language.push_back("Common");
	language.push_back("Draconic");
	string draconicAncestry;
	if (type == 1) {
		draconicAncestry = "Damage Type: Acid, Breath Weapon: 5 by 30 ft. line(Dex. save)\n";
	}
	else if (type == 2) {
		draconicAncestry = "Damage Type: Lightning, Breath Weapon: 5 by 30 ft. line(Dex. Save)\n";
	}
	else if (type == 3) {
		draconicAncestry = "Damage Type: Fire, Breath Weapon: 5 by 30 ft. line(Dex. Save)\n";
	}
	else if (type == 4) {
		draconicAncestry = "Damage Type: Lightning, Breath Weapon: 5 by 30 ft. line(Dex. Save)\n";
	}
	else if (type == 5) {
		draconicAncestry = "Damage Type: Acid, Breath Weapon: 5 by 30 ft. line(Dex. Save)\n";
	}
	else if (type == 6) {
		draconicAncestry = "Damage Type: Fire, Breath Weapon: 15 ft. cone(Dex. Save)\n";

	}
	else if (type == 7) {
		draconicAncestry = "Damage Type: Poison, Breath Weapon: 15 ft. cone(Con. Save)\n";

	}
	else if (type == 8) {
		draconicAncestry = "Damage Type: Fire, Breath Weapon: 15 ft. cone(Dex. Save)\n";

	}
	else if (type == 9) {
		draconicAncestry = "Damage Type: Cold, Breath Weapon: 15 ft. cone(Con. Save)\n";

	}
	else if (type == 10) {
		draconicAncestry = "Damage Type: Cold, Breath Weapon: 15 ft. cone(Con. Save)\n";

	}
	traits += "Draconic Ancestry: You have draconic ancestry. Your breath weapon and damage resistance are determined by your dragon type.\n";
	traits += "Breath Weapon: You can use your action to exhale destructive energy. Your draconic ancestry determines what size, shape, and damage type of exhalation. When you use your breath weapon, each creatur in the area of the exhalation must make a saving throw, the type of which is determined by your draconic ancestry. The DC for this saving throw equals 8 + your constitution modifier + your proficiency bonus. a creatur takes 2d6 damage on a failed save, and half as much damage on a successful one. The damage increases to 3d6 at 6th level, 4d6 at 11th level, and 5d6 at 16th level. After you use your breath weapon, you can't us it again until you complete a short or long rest.\n";
	traits += "Damage Resistance: You have resistance to the damage type associated with your draconic ancestry.\n";
	traits += draconicAncestry;
}
void setRace::gnome(int &intel) {
	intel += 2;
	speed = 25;
	cout << "Gnomes mature at the same rate humans do, and most are expected to settle down into an adult life by around age 40. they can live 350 to almost 500 years.";
	cout << endl;
	cout << "Please enter the age: ";
	cin >> age;
	cout << endl;
	cout << "Gnomes are most often good. Those who tend toward law are sages, engineers, researchers, scholars, investigators, or inventors. Those who tend toward chaos are minstrels, tricksters, wanderers, or fanciful jewlers. Gnomes are good-hearted, and even the tricksters among them are more playful than vicious." << endl;
	cout << endl;
	cout << "Gnomes are between 3 and 4 feet tall and average about 40 pounds." << endl;
	cout << "Please enter the height: ";
	cin >> height;
	cout << endl;
	cout << "Please enter the weight: ";
	cin >> weight;
	cout << endl;
	raceSize = "Small";
	vision = "Darkvision";
	traits += "Gnome Cunning: you have advantage on all Intelligence, Wisdom, and Charisma saving throws against magic.\n";
	language.push_back("Common");
	language.push_back("Gnomish");
}
void setRace::forestGnome(int &dex) {
	dex += 1;
	race = "Forest Gnome";
	traits += "Natural Illusionish: You know the minor illusion cantrip. Intelligence is your spellcasting ability for it.\n";
	traits += "Speak with Small Beasts: Through sounds and gestures, you can communicate simple ideas with small and smaller beasts. Forest gnomes love animals and often keep squirrels, badgers, rabbits, moles, woodpeckers, and other creatures as beloved pets.\n";
}
void setRace::rockGnome(int &con) {
	con += 1;
	race = "Rock Gnome";
	traits += "Artificer's Lore: Whenever you make an Intelligence(History) check realted to magic items, alchemical objects, or technological devices, you can add twice your proficiency bonus, instead of any proficiency bonus you normally apply.\n";
	traits += "Tinker: You have proficiency with artisan's tools(tinker's tools). Using those tools, you can spend 1 hour and 10gp worth of materials to construct a Tiny clockwork device(AC 5, 1HP). The device ceases to function after 24 hours(unless you spend 1 hour repairing it to keep the device functioning), or when you use your action to dismantle it; at that time, you can reclaim the materials used to create it. you can have up to three such device active at a time. When you create a device, choose one of the following options: Clockwork Toy, Fire Starter, Music Box.\n";
}
void setRace::halfElf(int &cha) {
	cha += 2;
	speed = 30;
	race = "Half-elf";
	cout << "Half-elves mature at the same rate humans do and reach adulthood around the age of 20. They live much longer than Humans, however, often exeeding 180 years." << endl;
	cout << endl;
	cout << "Please enter the age: ";
	cin >> age;
	cout << endl;
	cout << "Half-elves share the chaotic bent of their elven heritage. They value both personal freedom and creative expression, demonstrating neither love of leaders nore desire for followers. The chafe at rules, resent others' demands, and sometimes prove unreliable, or at least unpredictable." << endl;
	cout << endl;
	cout << "Half-elves are about the same size as humans, ranging from 5 to 6 feet tall." << endl;
	cout << "Please enter the height: ";
	cin >> height;
	cout << endl;
	cout << "Please enter the weight: ";
	cin >> weight;
	raceSize = "Medium";
	vision = "Darkvision";
	traits += "Fey Ancestry: You have advantage on saving throws against being charmed, and magic can't put you to sleep.\n";
	traits += "Skill Versatility: you gain proficiency in two skills of your choice.\n";
	language.push_back("Common");
	language.push_back("Elvish");
	string langArray[7] = { "Dwarvish","Elvish","Giant","Gnomish","Goblin","Halfling","Orc" };
	cout << "Please pick one other language:" << endl;
	cout << "1)Dwarvish" << endl;
	cout << "2)Elvish" << endl;
	cout << "3)Giant" << endl;
	cout << "4)Gnomish" << endl;
	cout << "5)Goblin" << endl;
	cout << "6)Halfling" << endl;
	cout << "7)Orc" << endl;
	cin >> langChoice;
	while (langChoice < 0 || langChoice>7) {
		cout << "Error: " << endl;
		cout << "Please pick one other language:" << endl;
		cout << "1)Dwarvish" << endl;
		cout << "2)Elvish" << endl;
		cout << "3)Giant" << endl;
		cout << "4)Gnomish" << endl;
		cout << "5)Goblin" << endl;
		cout << "6)Halfling" << endl;
		cout << "7)Orc" << endl;
		cin >> langChoice;
	}
	language.push_back(langArray[langChoice - 1]);
}
void setRace::halfOrc(int &str, int &con) {
	str += 2;
	con += 1;
	speed = 30;
	race = "Half-orc";
	cout << "Half-orcs mature a little faster than humans, reaching adulthood around age 14. The age noticeably faster and rarely live longer than 75 years." << endl;
	cout << endl;
	cout << "Please enter the age: ";
	cin >> age;
	cout << endl;
	cout << "Half-orcs inherit a tendency toward chaos from their orc parents and are not strongly inclined toward good. Half-orcs raised among orcs and willing to live out their lives among them are usually evil." << endl;
	cout << endl;
	cout << "Half-orcs are somewhat larger and bulkier than humans, and then range from 5 to well over 6 feet tall." << endl;
	cout << "Please enter the height: ";
	cin >> height;
	cout << endl;
	cout << "Please enter the weight: ";
	cin >> weight;
	raceSize = "Medium";
	vision = "Darkvision";
	traits += "Menacing: you gain proficiency in the Intimidation skill.\n";
	traits += "Relentless Endurance: When you are reduced to 0 hit points but not killed outright, you can drom to 1 hit point instead. You can't usre this feature again until you finish a long rest.\n";
	traits += "Savage Attacks: When you score a critical hit with a melee weapon attack, you can roll one of the weapon's damage dice one additional time and add it to the extra damage of the critical hit.\n";
	language.push_back("Common");
	language.push_back("Orc");
}
void setRace::tiefling(int &cha, int &intel) {
	cha += 2;
	intel += 1;
	speed = 30;
	race = "Tiefling";
	cout << "Tieflings mature at the same rate as humans, but live a few years longer." << endl;
	cout << endl;
	cout << "Please enter the age: ";
	cin >> age;
	cout << endl;
	cout << "Tieflings might not have an innate tendency toward evil, but many of them end up there. Evil or not, an independent nature inclines many tieflings toward a chaotic alignment." << endl;
	cout << endl;
	cout << "Tieflings are about the same size and build as humans." << endl;
	cout << "Please enter the height: ";
	cin >> height;
	cout << endl;
	cout << "Please enter the weight: ";
	cin >> weight;
	raceSize = "Medium";
	vision = "Darkvision";
	traits += "Hellish Resistance: You have resistance to fire damage.\n";
	traits += "Infernal Legacy: You know the thaumaturgy cantrip. Once you reach 3rd level you can cast the hellish rebuke spell once per day as a 2nd-level spell. Once you reach 5th level, you can also cast the darkness spell once per day. Charisma is your spellcasting ability for these spells.\n";
	language.push_back("Common");
	language.push_back("Infernal");
}
void setRace::printAllStats() {
	cout << "                                                      Race: " << race << endl;
	cout << "                                                      Speed: " << speed << endl;
	cout << "                                                      Age: " << age << endl;
	cout << "                                                      Height: " << height << endl;
	cout << "                                                      Weight: " << weight << endl;
	cout << "                                                      Race Size: " << raceSize << endl;
	cout << "                                                      Vision: " << vision << endl;
	int temp = language.size();
	cout << "                                                      Languages: ";
	for (int i = 0; i < temp; i++)
		cout << language[i] << endl;
}
void setRace::printRaceTraits() {
	cout << traits << endl;
}



setRace::~setRace()
{
}
