#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SeasonEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SeasonEntity"));
	}


	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(SeasonEntity*))(Il2CppBase() + 0x135DE8C))(this);
	}
	template <typename R = BlueprintComponent*> R get_blueprint() {
		return ((R (*)(SeasonEntity*))(Il2CppBase() + 0x135DF0C))(this);
	}
	template <typename R = bool> R get_hasBlueprint() {
		return ((R (*)(SeasonEntity*))(Il2CppBase() + 0x135DF00))(this);
	}
	template <typename R = void> R AddBlueprint(Il2CppString* newName) {
		return ((R (*)(SeasonEntity*, Il2CppString*))(Il2CppBase() + 0x135DF94))(this, newName);
	}
	template <typename R = void> R ReplaceBlueprint(Il2CppString* newName) {
		return ((R (*)(SeasonEntity*, Il2CppString*))(Il2CppBase() + 0x135E0A8))(this, newName);
	}
	template <typename R = void> R RemoveBlueprint() {
		return ((R (*)(SeasonEntity*))(Il2CppBase() + 0x135E1BC))(this);
	}
	template <typename R = CurrencyTypeComponent*> R get_currencyType() {
		return ((R (*)(SeasonEntity*))(Il2CppBase() + 0x135E1C8))(this);
	}
	template <typename R = bool> R get_hasCurrencyType() {
		return ((R (*)(SeasonEntity*))(Il2CppBase() + 0x135E250))(this);
	}
	template <typename R = void> R AddCurrencyType(CurrencyType* newType) {
		return ((R (*)(SeasonEntity*, CurrencyType*))(Il2CppBase() + 0x135E25C))(this, newType);
	}
	template <typename R = void> R ReplaceCurrencyType(CurrencyType* newType) {
		return ((R (*)(SeasonEntity*, CurrencyType*))(Il2CppBase() + 0x135E360))(this, newType);
	}
	template <typename R = void> R RemoveCurrencyType() {
		return ((R (*)(SeasonEntity*))(Il2CppBase() + 0x135E464))(this);
	}
	template <typename R = DescriptionComponent*> R get_description() {
		return ((R (*)(SeasonEntity*))(Il2CppBase() + 0x135E470))(this);
	}
	template <typename R = bool> R get_hasDescription() {
		return ((R (*)(SeasonEntity*))(Il2CppBase() + 0x135E4F8))(this);
	}
	template <typename R = void> R AddDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((R (*)(SeasonEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x135E504))(this, newCaption, newText);
	}
	template <typename R = void> R ReplaceDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((R (*)(SeasonEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x135E62C))(this, newCaption, newText);
	}
	template <typename R = void> R RemoveDescription() {
		return ((R (*)(SeasonEntity*))(Il2CppBase() + 0x135E754))(this);
	}
	template <typename R = IconComponent*> R get_icon() {
		return ((R (*)(SeasonEntity*))(Il2CppBase() + 0x135E760))(this);
	}
	template <typename R = bool> R get_hasIcon() {
		return ((R (*)(SeasonEntity*))(Il2CppBase() + 0x135E7E8))(this);
	}
	template <typename R = void> R AddIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((R (*)(SeasonEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x135E7F4))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename R = void> R ReplaceIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((R (*)(SeasonEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x135E94C))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename R = void> R RemoveIcon() {
		return ((R (*)(SeasonEntity*))(Il2CppBase() + 0x135EAA4))(this);
	}
	template <typename R = LevelComponent*> R get_level() {
		return ((R (*)(SeasonEntity*))(Il2CppBase() + 0x135EAB0))(this);
	}
	template <typename R = bool> R get_hasLevel() {
		return ((R (*)(SeasonEntity*))(Il2CppBase() + 0x135EB38))(this);
	}
	template <typename R = void> R AddLevel(float newValue) {
		return ((R (*)(SeasonEntity*, float))(Il2CppBase() + 0x135EB44))(this, newValue);
	}
	template <typename R = void> R ReplaceLevel(float newValue) {
		return ((R (*)(SeasonEntity*, float))(Il2CppBase() + 0x135EC48))(this, newValue);
	}
	template <typename R = void> R RemoveLevel() {
		return ((R (*)(SeasonEntity*))(Il2CppBase() + 0x135ED4C))(this);
	}
	template <typename R = OldBlueprintComponent*> R get_oldBlueprint() {
		return ((R (*)(SeasonEntity*))(Il2CppBase() + 0x135ED58))(this);
	}
	template <typename R = bool> R get_hasOldBlueprint() {
		return ((R (*)(SeasonEntity*))(Il2CppBase() + 0x135EDE0))(this);
	}
	template <typename R = void> R AddOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(SeasonEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x135EDEC))(this, newNames);
	}
	template <typename R = void> R ReplaceOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(SeasonEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x135EF00))(this, newNames);
	}
	template <typename R = void> R RemoveOldBlueprint() {
		return ((R (*)(SeasonEntity*))(Il2CppBase() + 0x135F014))(this);
	}
	template <typename R = OrderComponent*> R get_order() {
		return ((R (*)(SeasonEntity*))(Il2CppBase() + 0x135F020))(this);
	}
	template <typename R = bool> R get_hasOrder() {
		return ((R (*)(SeasonEntity*))(Il2CppBase() + 0x135F0A8))(this);
	}
	template <typename R = void> R AddOrder(int32_t newValue) {
		return ((R (*)(SeasonEntity*, int32_t))(Il2CppBase() + 0x135F0B4))(this, newValue);
	}
	template <typename R = void> R ReplaceOrder(int32_t newValue) {
		return ((R (*)(SeasonEntity*, int32_t))(Il2CppBase() + 0x135F1B8))(this, newValue);
	}
	template <typename R = void> R RemoveOrder() {
		return ((R (*)(SeasonEntity*))(Il2CppBase() + 0x135F2BC))(this);
	}
	template <typename R = QuestComponent*> R get_quest() {
		return ((R (*)(SeasonEntity*))(Il2CppBase() + 0x135F2C8))(this);
	}
	template <typename R = bool> R get_hasQuest() {
		return ((R (*)(SeasonEntity*))(Il2CppBase() + 0x135F350))(this);
	}
	template <typename R = void> R AddQuest(Il2CppString* newName) {
		return ((R (*)(SeasonEntity*, Il2CppString*))(Il2CppBase() + 0x135F35C))(this, newName);
	}
	template <typename R = void> R ReplaceQuest(Il2CppString* newName) {
		return ((R (*)(SeasonEntity*, Il2CppString*))(Il2CppBase() + 0x135F470))(this, newName);
	}
	template <typename R = void> R RemoveQuest() {
		return ((R (*)(SeasonEntity*))(Il2CppBase() + 0x135F584))(this);
	}
	template <typename R = TemporaryComponent*> R get_temporary() {
		return ((R (*)(SeasonEntity*))(Il2CppBase() + 0x135F590))(this);
	}
	template <typename R = bool> R get_hasTemporary() {
		return ((R (*)(SeasonEntity*))(Il2CppBase() + 0x135F618))(this);
	}
	template <typename R = void> R AddTemporary(int64_t newStartTime, int64_t newEndTime, int64_t newOBTStartTime, int64_t newOBTEndTime, int64_t newQAStartTime, int64_t newQAEndTime, CyclicTime* newCyclic) {
		return ((R (*)(SeasonEntity*, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, CyclicTime*))(Il2CppBase() + 0x135F624))(this, newStartTime, newEndTime, newOBTStartTime, newOBTEndTime, newQAStartTime, newQAEndTime, newCyclic);
	}
	template <typename R = void> R ReplaceTemporary(int64_t newStartTime, int64_t newEndTime, int64_t newOBTStartTime, int64_t newOBTEndTime, int64_t newQAStartTime, int64_t newQAEndTime, CyclicTime* newCyclic) {
		return ((R (*)(SeasonEntity*, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, CyclicTime*))(Il2CppBase() + 0x135F770))(this, newStartTime, newEndTime, newOBTStartTime, newOBTEndTime, newQAStartTime, newQAEndTime, newCyclic);
	}
	template <typename R = void> R RemoveTemporary() {
		return ((R (*)(SeasonEntity*))(Il2CppBase() + 0x135F8BC))(this);
	}

};

