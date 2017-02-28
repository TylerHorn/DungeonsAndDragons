#pragma once
#ifndef CHARACTERCLASS_H
#define CHARACTERCLASS_H
#include<iostream>
#include<vector>
#include<string>
using namespace std;
class characterClass {
private:
	string charClass;
	int level;
	int hp;
	int proficiencyBonus;
	string hpDice;
	string classAbilities;
	string savingThrows;
	string tools;
	vector<string> startingEquipment;
	vector<string> wepProf;
	vector<string> armorProf;
	vector<string> skills;
	vector<string> profSkills;
	
public:
	void barbarian(int);
	void bard(int);
	void cleric(int);
	void druid(int);
	void fighter(int);
	void monk(int);
	void paladin(int);
	void ranger(int);
	void rogue(int);
	void sorcerer(int);
	void warlock(int);
	void printCharacterClass();
	void printProf();
	void printSkills(int&, int&, int&, int&, int&, int&);
};
void characterClass::barbarian(int con) {
	charClass = "Barbarian";
	hp = 12 + con;
	hpDice = "1d12 per Barbarian level";
	proficiencyBonus = 2;
	armorProf = { "light armor","medium armor","shields" };
	wepProf = { "simple weapons","martial weapons" };
	tools = "none.";
	savingThrows = "Strength, Constitution";
	skills = {"Animal Handling", "Athletics", "Intimidation", "Nature", "Perception", "Survival"};
	int skillSize = skills.size();
	int skillPick;
	cout << "Choose your first skill" << endl;
	for (int i = 0; i < skillSize; i++) {
		cout << i+1 << ")" << skills[i] << " ";
	}
	cin >> skillPick;
	while (skillPick<0 && skillPick>skillSize) {
		cout << "Error: " << endl;
		for (int i = 0; i < skillSize; i++) {
			cout << i+1 << ")" << skills[i] << " ";
		}
		cin >> skillPick;
	}
	profSkills.push_back(skills[skillPick - 1]);
	skills.erase(skills.begin() + (skillPick-1));
	skillSize = skills.size();
	cout << "Choose your second skill" << endl;
	for (int i = 0; i < skillSize; i++) {
		cout << i+1 << ")" << skills[i] << " ";
	}
	cin >> skillPick;
	while (skillPick<0 && skillPick>skillSize) {
		cout << "Error: " << endl;
		for (int i = 0; i < skillSize; i++) {
			cout << i+1 << ")" << skills[i] << " ";
		}
		cin >> skillPick;
	}
	profSkills.push_back(skills[skillPick - 1]);
	skills.erase(skills.begin() + (skillPick - 1));
	classAbilities += "Rage: In battle, you fight with primal ferocity. On your turn, you can enter a rage as a bonus action. While raging, you gain the following benefits: if you aren’t wearing heavy armor : You have advantage on Strength checks and Strength saving throws. When you make a melee weapon attack using Strength, you gain a bonus to the damage roll that increases as you gain levels as a barbarian, as shown in the Rage Damage column of the Barbarian table. You have resistance to bludgeoning, piercing, and slashing damage. If you are able to cast spells, you can’t cast them or concentrate on them while raging. Your rage lasts for 1 minute. It ends early if you are knocked unconscious or if your turn ends and you haven’t attacked a hostile creature since your last turn or taken damage since then. You can also end your rage on your turn as a bonus action. Once you have raged the number of times shown for your barbarian level in the Rages column of the Barbarian table, you must finish a long rest before you can rage again.\n";
	classAbilities += "Unarmored Devense: While you're not wearing armor, your Armor Class equals 10 + your Dexterity modifier + your Constitution modifier. You can use a shield and still gain this benefit.\n";
	classAbilities += "Rage: +2.\n";
}
void characterClass::bard(int con) {
	charClass = "Bard";
	hp = con + 8;
	hpDice = "1d8 per bard level.";
	proficiencyBonus = 2;
	armorProf = { "Light armor" };
	wepProf = { "Simple weapons","hand crossbows","longswords","rapiers","shortswords" };
	tools = "3 instruments of your choice.";
	skills = { "Acrobatics","Animal Handling","Arcana","Athletics","Deception","Hisory","Insight","Intimidation","Investigation","Medicine","Nature","Perception","Performance","Persuasion","Religion","Sleight of Hand","Stealth","Survival" };
	int skillPick;
	int skillSize = skills.size();
	cout << "Choose your first skill" << endl;
	for (int i = 0; i < skillSize; i++) {
		cout << i+1 << ")" << skills[i] << " ";
	}
	cin >> skillPick;
	while (skillPick<0 && skillPick>skillSize) {
		cout << "Error: " << endl;
		for (int i = 0; i < skillSize; i++) {
			cout << i+1 << ")" << skills[i] << " ";
		}
		cin >> skillPick;
	}
	profSkills.push_back(skills[skillPick - 1]);
	skills.erase(skills.begin() + (skillPick - 1));
	skillSize = skills.size();
	cout << "Choose your second skill" << endl;
	for (int i = 0; i < skillSize; i++) {
		cout << i+1 << ")" << skills[i] << " ";
	}
	cin >> skillPick;
	while (skillPick<0 && skillPick>skillSize) {
		cout << "Error: " << endl;
		cout << "Choose your second skill" << endl;
		for (int i = 0; i < skillSize; i++) {
			cout << i+1 << ")" << skills[i] << " ";
		}
		cin >> skillPick;
	}
	profSkills.push_back(skills[skillPick - 1]);
	skills.erase(skills.begin() + (skillPick - 1));
	skillSize = skills.size();
	cout << "Choose your third skill" << endl;
	for (int i = 0; i < skillSize; i++) {
		cout << i+1 << ")" << skills[i] << " ";
	}
	cin >> skillPick;
	while (skillPick<0 && skillPick>skillSize) {
		cout << "Error: " << endl;
		for (int i = 0; i < skillSize; i++) {
			cout << i+1 << ")" << skills[i] << " ";
		}
		cin >> skillPick;
	}
	profSkills.push_back(skills[skillPick - 1]);
	skills.erase(skills.begin() + (skillPick - 1));
	classAbilities += "Spellcasting Ability: Charisma is your spellcasting ability for your bard spells. your magic comes from the heart and soul you pour into the performance of your music or oration. You use your Charisma whenever a spell refers to your spellcasting ability. In addition, you use your Charisma modifier when setting the saving throw DC for a bard spell you cast and when making an attack roll with one.\n";
	classAbilities += "Spell save DC = 8 + your proficiency bonus + your Charisma modifier.\n";
	classAbilities += "Spell attack modifier = your proficiency bonus + your Charisma modifier.\n";
	classAbilities += "Ritual Casting: You can cast any bard spell you know as a ritual if that spell has a ritual tag.\n";
	classAbilities += "Spellcasting Focus: You can use a musical instrument as a spellcasting focus for your bard spells.\n";
	classAbilities += "Bardic Insperation: You can inspire others through stirring w ords or music. To do so, you use a bonus action on your turn to choose one creature other than yourself within 60 feet of you who can hear you.That creature gains one Bardic Inspiration die, a d6. Once within the next 10 minutes, the creature can roll the die and add the number rolled to one ability check, attack roll, or saving throw it makes.The creature can wait until after it rolls the d20 before deciding to use the Bardic Inspiration die, but must decide before the DM says whether the roll succeeds or fails.Once the Bardic Inspiration die is rolled, it is lost.A creature can have only one Bardic Inspiration die at a time. You can use this feature a number of times equal to your charisma modifier(a minimum of once). you regain any expended uses when you finish a long rest. Your bardic Insperation die changes when you reach certain levels in this class. The die becomes a d8 at 5th level, a d10 at 10th level, and a d12 at 15th level.\n";
	classAbilities += "Cantrips known: 2.\n";
	classAbilities += "First level spells known: 2.\n";
}
void characterClass::cleric(int con) {
	charClass = "Cleric";
	hp = con + 8;
	hpDice = "1d8 per cleric level";
	proficiencyBonus = 2;
	armorProf = { "Light armor","Medium armor","Shields" };
	wepProf = { "All simple weapons" };
	tools = "none";
	savingThrows = "Wisdom, Charisma";
	int skillPick;
	skills = { "History","Insight","Medicine","Persuasion","Religion" };
	int skillSize = skills.size();
	cout << "Choose your first skill" << endl;
	for (int i = 0; i < skillSize; i++) {
		cout << i + 1 << ")" << skills[i] << " ";
	}
	cin >> skillPick;
	while (skillPick<0 && skillPick>skillSize) {
		cout << "Error: " << endl;
		for (int i = 0; i < skillSize; i++) {
			cout << i + 1 << ")" << skills[i] << " ";
		}
		cin >> skillPick;
	}
	profSkills.push_back(skills[skillPick - 1]);
	skills.erase(skills.begin() + (skillPick - 1));
	skillSize = skills.size();
	cout << "Choose your second skill" << endl;
	for (int i = 0; i < skillSize; i++) {
		cout << i + 1 << ")" << skills[i] << " ";
	}
	cin >> skillPick;
	while (skillPick<0 && skillPick>skillSize) {
		cout << "Error: " << endl;
		for (int i = 0; i < skillSize; i++) {
			cout << i + 1 << ")" << skills[i] << " ";
		}
		cin >> skillPick;
	}
	profSkills.push_back(skills[skillPick - 1]);
	classAbilities += "Wisdom is your spellcasting ability for your cleric spells. The power o f your spells comes from your devotion to your deity.You use your W isdom whenever a cleric spell refers to your spellcasting ability.In addition, you use your Wisdom modifier when setting the saving throw DC for a cleric spell you cast and when making an attack roll with one.\n";
	classAbilities += "Spell save DC:  8 + your proficiency bonus + your Wisdom modifier\n";
	classAbilities += "Spell attack modifier = your proficiency bonus + your Wisdom modifier\n";
	classAbilities += "Ritual Casting: You can cast a cleric spell as a ritual if that spell has the ritual tag and you have the spell prepared.\n";
	classAbilities += "Spellcasting Focus: You can use a holy symbol as a spellcasting focus for your cleric spells.\n";
	classAbilities += "Divine Domain: Choose one domain related to your deity: Knowledge, Life, Light, Nature, Tempest, Trickery, or War.Each domain is detailed at the end o f the class description, and each one provides examples o f gods associated with it.Your choice grants you domain spells and other features when you choose it at 1st level.It also grants you additional ways to use Channel Divinity when you gain that feature at 2nd level, and additional benefits at 6th, 8th, and 17th levels.\n";
	classAbilities += "Domain Spells: Each domain has a list o f spells—its domain spells— that you gain at the cleric levels noted in the domain description.Once you gain a domain spell, you always have it prepared, and it doesn’t count against the number o f spells you can prepare each day. If you have a domain spell that doesn’t appear on the cleric spell list, the spell is nonetheless a cleric spell for you.\n";

}
void characterClass::druid(int con) {
	charClass = "Druid";
	hp = con + 8;
	hpDice = "1d8 + per druid level";
	proficiencyBonus = 2;
	armorProf = { "Light armor","Medium armor","Shields" };
	wepProf = { "Clubs","Daggers","Darts","Javelins","Maces","Quarterstaffs","Scimitars","Sickles","Slings","Spears" };
	tools = "Herbalism Kit";
	savingThrows = "Intelligence, Wisdom";
	int skillPick;
	skills = { "Arcana","Animal Handling","Insight","Medicine","Nature","Perception","Religion","Survival"};
	int skillSize = skills.size();
	cout << "Choose your first skill" << endl;
	for (int i = 0; i < skillSize; i++) {
		cout << i + 1 << ")" << skills[i] << " ";
	}
	cin >> skillPick;
	while (skillPick<0 && skillPick>skillSize) {
		cout << "Error: " << endl;
		for (int i = 0; i < skillSize; i++) {
			cout << i + 1 << ")" << skills[i] << " ";
		}
		cin >> skillPick;
	}
	profSkills.push_back(skills[skillPick - 1]);
	skills.erase(skills.begin() + (skillPick - 1));
	skillSize = skills.size();
	cout << "Choose your second skill" << endl;
	for (int i = 0; i < skillSize; i++) {
		cout << i + 1 << ")" << skills[i] << " ";
	}
	cin >> skillPick;
	while (skillPick<0 && skillPick>skillSize) {
		cout << "Error: " << endl;
		for (int i = 0; i < skillSize; i++) {
			cout << i + 1 << ")" << skills[i] << " ";
		}
		cin >> skillPick;
	}
	profSkills.push_back(skills[skillPick - 1]);
	classAbilities += "You know Druidic, the secret language of druids. You can speak the language and use it to leave hidden messages.You and others who know this language automatically spot such a message.Others spot the message’s presence with a successful DC 15 Wisdom (Perception) check but can’t decipher it without magic.\n";
	classAbilities += "Spellcasting Ability: Wisdom is your spellcasting ability for your druid spells, since your magic draws upon your devotion and attunement to nature.You use your Wisdom whenever a spell refers to your spellcasting ability. In addition, you use your Wisdom modifier when setting the saving throw DC for a druid spell you cast and when making an attack roll with one.\n";
	classAbilities += "Spell save DC: 8 + your proficiency bonus + your Wisdom modifier.\n";
	classAbilities += "Spell attack modifier: proficiency bonus + your Wisdom modifier.\n";
	classAbilities += "Ritual Casting: you can cast a druid spell as a ritual if that spell has the ritual tag and you have the spell prepared.\n";
	classAbilities += "Spellcasting Focus: you can use a druidic focus as a spellcasting focus for your druid spells.\n";
}
void characterClass::fighter(int con) {
	charClass = "Fighter";
	hp = con + 10;
	hpDice = "1d10 per fighter level";
	proficiencyBonus = 2;
	armorProf = { "All armor","shields" };
	wepProf = { "Simple weapons","Martial weapons" };
	tools = "none";
	savingThrows = "Strength, Constitution";
	int skillPick;
	skills = { "Acrobatics","Animal Handling","Athletics","History","Insight","Intimidation","Perception","Survival" };
	int skillSize = skills.size();
	cout << "Choose your first skill" << endl;
	for (int i = 0; i < skillSize; i++) {
		cout << i + 1 << ")" << skills[i] << " ";
	}
	cin >> skillPick;
	while (skillPick<0 && skillPick>skillSize) {
		cout << "Error: " << endl;
		for (int i = 0; i < skillSize; i++) {
			cout << i + 1 << ")" << skills[i] << " ";
		}
		cin >> skillPick;
	}
	profSkills.push_back(skills[skillPick - 1]);
	skills.erase(skills.begin() + (skillPick - 1));
	skillSize = skills.size();
	cout << "Choose your second skill" << endl;
	for (int i = 0; i < skillSize; i++) {
		cout << i + 1 << ")" << skills[i] << " ";
	}
	cin >> skillPick;
	while (skillPick<0 && skillPick>skillSize) {
		cout << "Error: " << endl;
		for (int i = 0; i < skillSize; i++) {
			cout << i + 1 << ")" << skills[i] << " ";
		}
		cin >> skillPick;
	}
	profSkills.push_back(skills[skillPick - 1]);
	classAbilities += "Fighting Style: You adopt a particular style of fighting as your specialty. Choose one of the following options. You can’t take a Fighting Style option more than once, even if you later get to choose again.\n Archery: You gain a + 2 bonus to attack rolls you make with ranged weapons.\n Defense: While you are wearing armor, you gain a + 1 bonus to AC.\n Dueling: When you are wielding a melee weapon in one hand and no other weapons, you gain a + 2 bonus to damage rolls with that weapon.\n Great Weapon Fighting: When you roll a 1 or 2 on a damage die for an attack you make with a melee weapon that you are wielding with two hands, you can reroll the die and must use the new roll, even if the new roll is a 1 or a 2. The weapon must have the two-handed or versatile property for you to gain this benefit.\n Protection: When a creature you can see attacks a target other than you that is within 5 feet of you, you can use your reaction to impose disadvantage on the attack roll. You must be wielding a shield.\n Two-Weapon Fighting: When you engage in two-weapon fighting, you can add your ability modifier to the damage of the second attack.\n";
	classAbilities += "Second Wind: You have a limited well of stamina that you can draw on to protect yourself from harm. On your turn, you can use a bonus action to regain hit points equal to 1d 10 + your fighter level. Once you use this feature, you must finish a short or long rest before you can use it again.\n";
}
void characterClass::monk(int con) {
	charClass = "Monk";
	hp = con + 8;
	hpDice = "1d8 per level";
	armorProf = { "none" };
	wepProf = { "Simple weapons","Shortswords" };
	tools = "Choose one type of artisan's tools or one musical instrument.";
	savingThrows = "Strength, Dexterity";
	int skillPick;
	skills = { "Acrobatics","Athletics","History","Insight","Religion","Stealth" }; \
		int skillSize = skills.size();
	cout << "Choose your first skill" << endl;
	for (int i = 0; i < skillSize; i++) {
		cout << i + 1 << ")" << skills[i] << " ";
	}
	cin >> skillPick;
	while (skillPick<0 && skillPick>skillSize) {
		cout << "Error: " << endl;
		for (int i = 0; i < skillSize; i++) {
			cout << i + 1 << ")" << skills[i] << " ";
		}
		cin >> skillPick;
	}
	profSkills.push_back(skills[skillPick - 1]);
	skills.erase(skills.begin() + (skillPick - 1));
	skillSize = skills.size();
	cout << "Choose your second skill" << endl;
	for (int i = 0; i < skillSize; i++) {
		cout << i + 1 << ")" << skills[i] << " ";
	}
	cin >> skillPick;
	while (skillPick<0 && skillPick>skillSize) {
		cout << "Error: " << endl;
		for (int i = 0; i < skillSize; i++) {
			cout << i + 1 << ")" << skills[i] << " ";
		}
		cin >> skillPick;
	}
	profSkills.push_back(skills[skillPick - 1]);
	classAbilities += "Unarmored Devense: While you're not wearing armor, your Armor Class equals 10 + your Dexterity modifier + your Constitution modifier. You can use a shield and still gain this benefit.\n";
	classAbilities += "At 1st level, your practice of martial arts gives you mastery o f combat styles that use unarmed strikes and monk w eapons, which are shortswords and any simple melee weapons that don’t have the two - handed or heavy property. You gain the following benefits while you are unarmed or wielding only m onk weapons and you aren’t wearing armor or wielding a shield : You can use Dexterity instead o f Strength for the attack and damage rolls o f your unarmed strikes and monk weapons. You can roll a d4 in place of the normal damage of your unarmed strike or monk weapon.This die changes as you gain monk levels, as shown in the Martial Arts column of the Monk table. When you use the Attack action with an unarmed strike or a monk weapon on your turn, you can make one unarmed strike as a bonus action.For example, if you take the Attack action and attack with a quarterstaff, you can also make an unarmed strike as a bonus action, assuming you haven't already taken a bonus action this turn. Certain monasteries use specialized forms of the monk weapons. For example, you might use a club that is two lengths of wood connected by a short chain (called a nunchaku) or a sickle with a shorter, straighter blade(called a kama). Whatever name you use for a monk weapon, you can use the game statistics provided for the weapon\n";
}
void characterClass::paladin(int con) {
	charClass = "Palidan";
	hp = con + 10;
	hpDice = "1d10 per level";
	proficiencyBonus = 2;
	armorProf = { "All armor","Shields" };
	wepProf = { "Simple weapons","Martial weapons" };
	tools = "none";
	savingThrows = "Wisdom, Charisma";
	int skillPick;
	skills = {"Athletics","Insight","Intimidation","Medicine","Persuasion","Religion"};
	int skillSize = skills.size();
	cout << "Choose your first skill" << endl;
	for (int i = 0; i < skillSize; i++) {
		cout << i + 1 << ")" << skills[i] << " ";
	}
	cin >> skillPick;
	while (skillPick<0 && skillPick>skillSize) {
		cout << "Error: " << endl;
		for (int i = 0; i < skillSize; i++) {
			cout << i + 1 << ")" << skills[i] << " ";
		}
		cin >> skillPick;
	}
	profSkills.push_back(skills[skillPick - 1]);
	skills.erase(skills.begin() + (skillPick - 1));
	skillSize = skills.size();
	cout << "Choose your second skill" << endl;
	for (int i = 0; i < skillSize; i++) {
		cout << i + 1 << ")" << skills[i] << " ";
	}
	cin >> skillPick;
	while (skillPick<0 && skillPick>skillSize) {
		cout << "Error: " << endl;
		for (int i = 0; i < skillSize; i++) {
			cout << i + 1 << ")" << skills[i] << " ";
		}
		cin >> skillPick;
	}
	profSkills.push_back(skills[skillPick - 1]);
	classAbilities += "Divine Sense: The presence o f strong evil registers on your senses like a noxious odor, and powerful good rings like heavenly music in your ears. As an action, you can open your awareness to detect such forces. Until the end o f your next turn, you know the location of any celestial, fiend, or undead within 60 feet of you that is not behind total cover.You know the type(celestial, fiend, or undead) of any being w hose presence you sense, but not its identity (the vampire Count Strahd von Zarovich, for instance). Within the same radius, you also detect the presence of any place or object that has been consecrated or desecrated, as with the hallow spell. You can use this feature a number of times equal to 1 + your Charisma modifier. When you finish a long rest, you regain all expended uses.\n";
	classAbilities += "Lay on Hands: Your blessed touch can heal wounds. You have a pool of healing power that replenishes when you take a long rest.With that pool, you can restore a total number of hit points equal to your paladin level x 5. As an action, you can touch a creature and draw power from the pool to restore a number of hit points to that creature, up to the maximum amount remaining in your pool. Alternatively, you can expend 5 hit points from your pool of healing to cure the target o f one disease or neutralize one poison affecting it.You can cure multiple diseases and neutralize multiple poisons with a single use of Lay on Hands, expending hit points separately for each one. This feature has no effect on undead and constructs.\n";

}
void characterClass::ranger(int con) {
	charClass = "Ranger";
	hp = con + 10;
	hpDice = "1d10 per level";
	proficiencyBonus = 2;
	armorProf = { "Light armor", "Medium armor","Shields" };
	wepProf = { "Simple weapons", "Martial weapons" };
	tools = "none";
	savingThrows = "Strength, Dexterity";
	int skillPick;
	skills = { "Animal Handling","Athletics","Insight","Investigation","Nature","Perception","Stealth","Survival" };
	int skillSize = skills.size();
	cout << "Choose your first skill" << endl;
	for (int i = 0; i < skillSize; i++) {
		cout << i + 1 << ")" << skills[i] << " ";
	}
	cin >> skillPick;
	while (skillPick<0 && skillPick>skillSize) {
		cout << "Error: " << endl;
		for (int i = 0; i < skillSize; i++) {
			cout << i + 1 << ")" << skills[i] << " ";
		}
		cin >> skillPick;
	}
	profSkills.push_back(skills[skillPick - 1]);
	skills.erase(skills.begin() + (skillPick - 1));
	skillSize = skills.size();
	cout << "Choose your second skill" << endl;
	for (int i = 0; i < skillSize; i++) {
		cout << i + 1 << ")" << skills[i] << " ";
	}
	cin >> skillPick;
	while (skillPick<0 && skillPick>skillSize) {
		cout << "Error: " << endl;
		for (int i = 0; i < skillSize; i++) {
			cout << i + 1 << ")" << skills[i] << " ";
		}
		cin >> skillPick;
	}
	profSkills.push_back(skills[skillPick - 1]);
	skills.erase(skills.begin() + (skillPick - 1));
	skillSize = skills.size();
	cout << "Choose your third skill" << endl;
	for (int i = 0; i < skillSize; i++) {
		cout << i + 1 << ")" << skills[i] << " ";
	}
	cin >> skillPick;
	while (skillPick<0 && skillPick>skillSize) {
		cout << "Error: " << endl;
		for (int i = 0; i < skillSize; i++) {
			cout << i + 1 << ")" << skills[i] << " ";
		}
		cin >> skillPick;
	}
	profSkills.push_back(skills[skillPick - 1]);
	classAbilities += "Favored Enemy: Beginning at 1st level, you have significant experience studying, tracking, hunting, and even talking to a certain type of enemy. Choose a type of favored enemy : aberrations, beasts, celestials, constructs, dragons, elementals, fey, fiends, giants, monstrosities, oozes, plants, or undead. Alternatively, you can select two races of humanoid (such as gnolls and orcs) as favored enemies. You have advantage on Wisdom(Survival) checks to track your favored enemies, as well as on Intelligence checks to recall information about them. When you gain this feature, you also learn one language of your choice that is spoken by your favored enemies, if they speak one at all. You choose one additional favored enemy, as well as an associated language, at 6th and 14th level. As you gain levels, your choices should reflect the types of monsters you have encountered on your adventures.\n";
	classAbilities += "Natural Explorer: You are particularly familiar with one type o f natural environment and are adept at traveling and surviving in such regions.Choose one type o f favored terrain : arctic, coast, desert, forest, grassland, mountain, swamp, or the Underdark. When you make an Intelligence or Wisdom check related to your favored terrain, your proficiency bonus is doubled if you are using a skill that you’re proficient in. While traveling for an hour or more in your favored terrain, you gain the following benefits : Difficult terrain doesn’t slow your group’s travel. Your group can’t become lost except by magical means. Even when you are engaged in another activity while traveling(such as foraging, navigating, or tracking), you remain alert to danger. If you are traveling alone, you can move stealthily at a normal pace. When you forage, you find twice as much food as you normally would. While tracking other creatures, you also learn their exact number, their sizes, and how long ago they passed through the area. You choose additional favored terrain types at 6th and 10th level.\n";

}
void characterClass::rogue(int con) {
	charClass = "Rogue";
	hp = con + 8;
	hpDice = "18d per level";
	proficiencyBonus = 2;
	armorProf = { "Light armor" };
	wepProf = { "Simple weapons","Hand crossbows","Longswords","Rapiers","Shortswords" };
	tools = "Thievs tools";
	savingThrows = "Dexterity, Intelligence";
	int skillPick;
	skills = { "Animal Handling","Athletics","Insight","Investigation","Nature","Perception","Stealth","Survival" };
	int skillSize = skills.size();
	cout << "Choose your first skill" << endl;
	for (int i = 0; i < skillSize; i++) {
		cout << i + 1 << ")" << skills[i] << " ";
	}
	cin >> skillPick;
	while (skillPick<0 && skillPick>skillSize) {
		cout << "Error: " << endl;
		for (int i = 0; i < skillSize; i++) {
			cout << i + 1 << ")" << skills[i] << " ";
		}
		cin >> skillPick;
	}
	profSkills.push_back(skills[skillPick - 1]);
	skills.erase(skills.begin() + (skillPick - 1));
	skillSize = skills.size();
	cout << "Choose your second skill" << endl;
	for (int i = 0; i < skillSize; i++) {
		cout << i + 1 << ")" << skills[i] << " ";
	}
	cin >> skillPick;
	while (skillPick<0 && skillPick>skillSize) {
		cout << "Error: " << endl;
		for (int i = 0; i < skillSize; i++) {
			cout << i + 1 << ")" << skills[i] << " ";
		}
		cin >> skillPick;
	}
	profSkills.push_back(skills[skillPick - 1]);
	classAbilities += "Expertise: At 1st level, choose two of your skill proficiencies, or one of your skill proficiencies and your proficiency with thieves’ tools.Your proficiency bonus is doubled for any ability check you make that uses either of the chosen proficiencies. At 6th level, you can choose two more of your proficiencies(in skills or with thieves’ tools) to gain this benefit.\n";
	classAbilities += "Sneak Attack: Beginning at 1st level, you know how to strike subtly and exploit a foe’s distraction.Once per turn, you can deal an extra 1d6 damage to one creature you hit with an attack if you have advantage on the attack roll.The attack must use a finesse or a ranged weapon. You don’t need advantage on the attack roll if another enemy of the target is within 5 feet o f it, that enemy isn’t incapacitated, and you don’t have disadvantage on the attack roll. The amount of the extra damage increases as you gain levels in this class, as shown in the Sneak Attack column of the Rogue table.\n";
	classAbilities += "Thieves' Can't: During your rogue training you learned thieves’ cant, a secret mix of dialect, jargon, and code that allows you to hide messages in seemingly normal conversation. Only another creature that knows thieves’ cant understands such messages.It takes four times longer to convey such a message than it does to speak the same idea plainly. In addition, you understand a set of secret signs and symbols used to convey short, simple messages, such as whether an area is dangerous or the territory of a thieves’ guild, whether loot is nearby, or whether the people in an area are easy marks or will provide a safe house for thieves on the run.\n";

}
void characterClass::sorcerer(int con) {
	charClass = "Sorcerer";
	hp = con + 6;
	hpDice = "1d6 per level";
	proficiencyBonus = 2;
	armorProf = { "None" };
	wepProf = { "Daggers","Darts","Slings","Quarterstaffs","Light crossbows" };
	tools = "none";
	savingThrows = "Constitution, Charisma";
	int skillPick;
	skills = { "Arcana","Deception","Insight","Intimidation","Persuasion","Religion" };
	cout << "Choose your first skill" << endl;
	int skillSize = skills.size();
	for (int i = 0; i < skillSize; i++) {
		cout << i + 1 << ")" << skills[i] << " ";
	}
	cin >> skillPick;
	while (skillPick<0 && skillPick>skillSize) {
		cout << "Error: " << endl;
		for (int i = 0; i < skillSize; i++) {
			cout << i + 1 << ")" << skills[i] << " ";
		}
		cin >> skillPick;
	}
	profSkills.push_back(skills[skillPick - 1]);
	skills.erase(skills.begin() + (skillPick - 1));
	skillSize = skills.size();
	cout << "Choose your second skill" << endl;
	for (int i = 0; i < skillSize; i++) {
		cout << i + 1 << ")" << skills[i] << " ";
	}
	cin >> skillPick;
	while (skillPick<0 && skillPick>skillSize) {
		cout << "Error: " << endl;
		for (int i = 0; i < skillSize; i++) {
			cout << i + 1 << ")" << skills[i] << " ";
		}
		cin >> skillPick;
	}
	profSkills.push_back(skills[skillPick - 1]);
	classAbilities += "Spellcasting Ability: Charisma is your spellcasting ability for your sorcerer spells, since the power of your magic relies on your ability to project your will into the world.You use your Charisma whenever a spell refers to your spellcasting ability. In addition, you use your Charisma modifier when setting the saving throw DC for a sorcerer spell you cast and when making an attack roll with one.\n";
	classAbilities += "Spellcasting Focus: You can use an arcane focus as a spellcasting focus for your sorcerer spells.\n";
	classAbilities += "Spell Save DC: 8 + your proficiency bonus + your charisma modifier.\n";
	classAbilities += "Spell Attack Modifier: Your proficiency bonus + your Charisma modifier.\n";
	classAbilities += "Cantrips Known: 4\n";
	classAbilities += "First Level Spells Known: 2\n";

}
void characterClass::warlock(int con) {
	charClass = "Warlock";
	hp = con + 8;
	hpDice = "1d8 per level";
	proficiencyBonus = 2;
	armorProf = { "Light armor" };
	wepProf = { "Simple weapons" };
	tools = "none";
	savingThrows = "Wisdom, Charisma";
	int skillPick;
	skills = { "Arcana","Deception","History","Intimidation","Investigation","Nature","Religion" };
	cout << "Choose your first skill" << endl;
	int skillSize = skills.size();
	for (int i = 0; i < skillSize; i++) {
		cout << i + 1 << ")" << skills[i] << " ";
	}
	cin >> skillPick;
	while (skillPick<0 && skillPick>skillSize) {
		cout << "Error: " << endl;
		for (int i = 0; i < skillSize; i++) {
			cout << i + 1 << ")" << skills[i] << " ";
		}
		cin >> skillPick;
	}
	profSkills.push_back(skills[skillPick - 1]);
	skills.erase(skills.begin() + (skillPick - 1));
	skillSize = skills.size();
	cout << "Choose your second skill" << endl;
	for (int i = 0; i < skillSize; i++) {
		cout << i + 1 << ")" << skills[i] << " ";
	}
	cin >> skillPick;
	while (skillPick<0 && skillPick>skillSize) {
		cout << "Error: " << endl;
		for (int i = 0; i < skillSize; i++) {
			cout << i + 1 << ")" << skills[i] << " ";
		}
		cin >> skillPick;
	}
	profSkills.push_back(skills[skillPick - 1]);
	classAbilities += "Otherworldly Patron: At 1st level, you have struck a bargain with an otherworldly being of your choice : the Archfey, the Fiend, or the Great Old One, each of which is detailed at the end of the class description. Your choice grants you features at 1st level and again at 6th, 10th, and 14th level.\n";
	classAbilities += "Spellcasting Ability: Charisma is your spellcasting ability for your warlock spells, so you use your Charisma whenever a spell refers to your spellcasting ability. In addition, you use your Charisma modifier when setting the saving throw DC for a warlock spell you cast and when making an attack roll with one.\n";
	classAbilities += "Spellcasting Focus: You can use an arcane focus as a spellcasting focus for your warlock spells.\n";
	classAbilities += "Cantrips Known: 2\n";
	classAbilities += "Spells Known: 2\n";
	classAbilities += "Spell Slots: 1\n";
}
void characterClass::printCharacterClass() {
	cout << "Class: " << charClass << ", Level: " << level << ", HP: " << hp << endl; 
	cout<< "HP Dice: " << hpDice << ", Proficiency Bonus: " << proficiencyBonus <<", Saving Throws: "<<savingThrows<< endl;

}
void characterClass::printProf() {
	
	int skillSize = wepProf.size();
	cout << "Weapon Proficiency: ";
	for (int i = 0; i < skillSize; i++) {
		cout << wepProf[i]<<" ";
	}
	cout << endl;
	skillSize = armorProf.size();
	cout << "Armor Proficiency: ";
	for (int i = 0; i < skillSize; i++) {
		cout << armorProf[i] << " ";
	}
	cout << endl;
	cout << "Tools: " << tools << endl;
}
void characterClass::printSkills(int &strMod, int &dexMod, int &conMod, int &intelMod, int &wisMod, int &chaMod) {
	int strSkill, dexSkill, conSkill, IntelSkill, wisSkill, chaSkill;
	int tempSkillNumArray[18] = {dexMod, wisMod,intelMod,strMod,chaMod,intelMod,wisMod,chaMod,intelMod,wisMod,intelMod,wisMod,chaMod,chaMod,intelMod,dexMod,dexMod,wisMod};
	string tempSkillStringArray[18] = { "Acrobatics","Animal Handling","Arcana","Athletics","Deception","History","Insight","Intimidation","Investigation","Medicine","Nature","Perception","Performance","Persuasion","Religion","Slight of Hand","Stealth","Survival" };
	int skillSize = profSkills.size();
	for (int i = 0; i < skillSize; i++) {
		for (int k = 0; k < 18; k++) {
			if (profSkills[i] == tempSkillStringArray[k])
				tempSkillNumArray[k] += 2;
		}
	}
	cout << "Skill Proficiency: "<<endl;
	for (int i = 0; i < 18; i++) {
		cout << tempSkillStringArray[i]<<": "<<tempSkillNumArray[i]<<endl;
	}
	cout << endl;
}
#endif // !CHARACTERCLASS_H
