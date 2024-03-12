#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SeasonEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SeasonEntity"));
	}


	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(SeasonEntity*))(Il2CppBase() + 0x135DE8C))(this);
	}
	template <typename T = uintptr_t> T get_blueprint() {
		return ((T (*)(SeasonEntity*))(Il2CppBase() + 0x135DF0C))(this);
	}
	template <typename T = bool> T get_hasBlueprint() {
		return ((T (*)(SeasonEntity*))(Il2CppBase() + 0x135DF00))(this);
	}
	template <typename T = void> T AddBlueprint(Il2CppString* newName) {
		return ((T (*)(SeasonEntity*, Il2CppString*))(Il2CppBase() + 0x135DF94))(this, newName);
	}
	template <typename T = void> T ReplaceBlueprint(Il2CppString* newName) {
		return ((T (*)(SeasonEntity*, Il2CppString*))(Il2CppBase() + 0x135E0A8))(this, newName);
	}
	template <typename T = void> T RemoveBlueprint() {
		return ((T (*)(SeasonEntity*))(Il2CppBase() + 0x135E1BC))(this);
	}
	template <typename T = uintptr_t> T get_currencyType() {
		return ((T (*)(SeasonEntity*))(Il2CppBase() + 0x135E1C8))(this);
	}
	template <typename T = bool> T get_hasCurrencyType() {
		return ((T (*)(SeasonEntity*))(Il2CppBase() + 0x135E250))(this);
	}
	template <typename T = void> T AddCurrencyType(uintptr_t newType) {
		return ((T (*)(SeasonEntity*, uintptr_t))(Il2CppBase() + 0x135E25C))(this, newType);
	}
	template <typename T = void> T ReplaceCurrencyType(uintptr_t newType) {
		return ((T (*)(SeasonEntity*, uintptr_t))(Il2CppBase() + 0x135E360))(this, newType);
	}
	template <typename T = void> T RemoveCurrencyType() {
		return ((T (*)(SeasonEntity*))(Il2CppBase() + 0x135E464))(this);
	}
	template <typename T = uintptr_t> T get_description() {
		return ((T (*)(SeasonEntity*))(Il2CppBase() + 0x135E470))(this);
	}
	template <typename T = bool> T get_hasDescription() {
		return ((T (*)(SeasonEntity*))(Il2CppBase() + 0x135E4F8))(this);
	}
	template <typename T = void> T AddDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((T (*)(SeasonEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x135E504))(this, newCaption, newText);
	}
	template <typename T = void> T ReplaceDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((T (*)(SeasonEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x135E62C))(this, newCaption, newText);
	}
	template <typename T = void> T RemoveDescription() {
		return ((T (*)(SeasonEntity*))(Il2CppBase() + 0x135E754))(this);
	}
	template <typename T = uintptr_t> T get_icon() {
		return ((T (*)(SeasonEntity*))(Il2CppBase() + 0x135E760))(this);
	}
	template <typename T = bool> T get_hasIcon() {
		return ((T (*)(SeasonEntity*))(Il2CppBase() + 0x135E7E8))(this);
	}
	template <typename T = void> T AddIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((T (*)(SeasonEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x135E7F4))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename T = void> T ReplaceIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((T (*)(SeasonEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x135E94C))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename T = void> T RemoveIcon() {
		return ((T (*)(SeasonEntity*))(Il2CppBase() + 0x135EAA4))(this);
	}
	template <typename T = uintptr_t> T get_level() {
		return ((T (*)(SeasonEntity*))(Il2CppBase() + 0x135EAB0))(this);
	}
	template <typename T = bool> T get_hasLevel() {
		return ((T (*)(SeasonEntity*))(Il2CppBase() + 0x135EB38))(this);
	}
	template <typename T = void> T AddLevel(float newValue) {
		return ((T (*)(SeasonEntity*, float))(Il2CppBase() + 0x135EB44))(this, newValue);
	}
	template <typename T = void> T ReplaceLevel(float newValue) {
		return ((T (*)(SeasonEntity*, float))(Il2CppBase() + 0x135EC48))(this, newValue);
	}
	template <typename T = void> T RemoveLevel() {
		return ((T (*)(SeasonEntity*))(Il2CppBase() + 0x135ED4C))(this);
	}
	template <typename T = uintptr_t> T get_oldBlueprint() {
		return ((T (*)(SeasonEntity*))(Il2CppBase() + 0x135ED58))(this);
	}
	template <typename T = bool> T get_hasOldBlueprint() {
		return ((T (*)(SeasonEntity*))(Il2CppBase() + 0x135EDE0))(this);
	}
	template <typename T = void> T AddOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(SeasonEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x135EDEC))(this, newNames);
	}
	template <typename T = void> T ReplaceOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(SeasonEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x135EF00))(this, newNames);
	}
	template <typename T = void> T RemoveOldBlueprint() {
		return ((T (*)(SeasonEntity*))(Il2CppBase() + 0x135F014))(this);
	}
	template <typename T = uintptr_t> T get_order() {
		return ((T (*)(SeasonEntity*))(Il2CppBase() + 0x135F020))(this);
	}
	template <typename T = bool> T get_hasOrder() {
		return ((T (*)(SeasonEntity*))(Il2CppBase() + 0x135F0A8))(this);
	}
	template <typename T = void> T AddOrder(int32_t newValue) {
		return ((T (*)(SeasonEntity*, int32_t))(Il2CppBase() + 0x135F0B4))(this, newValue);
	}
	template <typename T = void> T ReplaceOrder(int32_t newValue) {
		return ((T (*)(SeasonEntity*, int32_t))(Il2CppBase() + 0x135F1B8))(this, newValue);
	}
	template <typename T = void> T RemoveOrder() {
		return ((T (*)(SeasonEntity*))(Il2CppBase() + 0x135F2BC))(this);
	}
	template <typename T = uintptr_t> T get_quest() {
		return ((T (*)(SeasonEntity*))(Il2CppBase() + 0x135F2C8))(this);
	}
	template <typename T = bool> T get_hasQuest() {
		return ((T (*)(SeasonEntity*))(Il2CppBase() + 0x135F350))(this);
	}
	template <typename T = void> T AddQuest(Il2CppString* newName) {
		return ((T (*)(SeasonEntity*, Il2CppString*))(Il2CppBase() + 0x135F35C))(this, newName);
	}
	template <typename T = void> T ReplaceQuest(Il2CppString* newName) {
		return ((T (*)(SeasonEntity*, Il2CppString*))(Il2CppBase() + 0x135F470))(this, newName);
	}
	template <typename T = void> T RemoveQuest() {
		return ((T (*)(SeasonEntity*))(Il2CppBase() + 0x135F584))(this);
	}
	template <typename T = uintptr_t> T get_temporary() {
		return ((T (*)(SeasonEntity*))(Il2CppBase() + 0x135F590))(this);
	}
	template <typename T = bool> T get_hasTemporary() {
		return ((T (*)(SeasonEntity*))(Il2CppBase() + 0x135F618))(this);
	}
	template <typename T = void> T AddTemporary(int64_t newStartTime, int64_t newEndTime, int64_t newOBTStartTime, int64_t newOBTEndTime, int64_t newQAStartTime, int64_t newQAEndTime, uintptr_t newCyclic) {
		return ((T (*)(SeasonEntity*, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, uintptr_t))(Il2CppBase() + 0x135F624))(this, newStartTime, newEndTime, newOBTStartTime, newOBTEndTime, newQAStartTime, newQAEndTime, newCyclic);
	}
	template <typename T = void> T ReplaceTemporary(int64_t newStartTime, int64_t newEndTime, int64_t newOBTStartTime, int64_t newOBTEndTime, int64_t newQAStartTime, int64_t newQAEndTime, uintptr_t newCyclic) {
		return ((T (*)(SeasonEntity*, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, uintptr_t))(Il2CppBase() + 0x135F770))(this, newStartTime, newEndTime, newOBTStartTime, newOBTEndTime, newQAStartTime, newQAEndTime, newCyclic);
	}
	template <typename T = void> T RemoveTemporary() {
		return ((T (*)(SeasonEntity*))(Il2CppBase() + 0x135F8BC))(this);
	}

};

}
