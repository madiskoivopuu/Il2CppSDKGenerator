#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RandomGroupEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RandomGroupEntity"));
	}


	template <typename T = BlueprintComponent*> T get_blueprint() {
		return ((T (*)(RandomGroupEntity*))(Il2CppBase() + 0x1711ED8))(this);
	}
	template <typename T = bool> T get_hasBlueprint() {
		return ((T (*)(RandomGroupEntity*))(Il2CppBase() + 0x1711F60))(this);
	}
	template <typename T = void> T AddBlueprint(Il2CppString* newName) {
		return ((T (*)(RandomGroupEntity*, Il2CppString*))(Il2CppBase() + 0x1711F6C))(this, newName);
	}
	template <typename T = void> T ReplaceBlueprint(Il2CppString* newName) {
		return ((T (*)(RandomGroupEntity*, Il2CppString*))(Il2CppBase() + 0x1712080))(this, newName);
	}
	template <typename T = void> T RemoveBlueprint() {
		return ((T (*)(RandomGroupEntity*))(Il2CppBase() + 0x1712194))(this);
	}
	template <typename T = OldBlueprintComponent*> T get_oldBlueprint() {
		return ((T (*)(RandomGroupEntity*))(Il2CppBase() + 0x17121A0))(this);
	}
	template <typename T = bool> T get_hasOldBlueprint() {
		return ((T (*)(RandomGroupEntity*))(Il2CppBase() + 0x1712228))(this);
	}
	template <typename T = void> T AddOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(RandomGroupEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1712234))(this, newNames);
	}
	template <typename T = void> T ReplaceOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(RandomGroupEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1712348))(this, newNames);
	}
	template <typename T = void> T RemoveOldBlueprint() {
		return ((T (*)(RandomGroupEntity*))(Il2CppBase() + 0x171245C))(this);
	}
	template <typename T = RandomGroupComponent*> T get_randomGroup() {
		return ((T (*)(RandomGroupEntity*))(Il2CppBase() + 0x1712468))(this);
	}
	template <typename T = bool> T get_hasRandomGroup() {
		return ((T (*)(RandomGroupEntity*))(Il2CppBase() + 0x17124F0))(this);
	}
	template <typename T = void> T AddRandomGroup(Il2CppArray<uintptr_t>* newList, int32_t newMaxItemsCount) {
		return ((T (*)(RandomGroupEntity*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x17124FC))(this, newList, newMaxItemsCount);
	}
	template <typename T = void> T ReplaceRandomGroup(Il2CppArray<uintptr_t>* newList, int32_t newMaxItemsCount) {
		return ((T (*)(RandomGroupEntity*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1712618))(this, newList, newMaxItemsCount);
	}
	template <typename T = void> T RemoveRandomGroup() {
		return ((T (*)(RandomGroupEntity*))(Il2CppBase() + 0x1712734))(this);
	}
	template <typename T = TypeComponent*> T get_type() {
		return ((T (*)(RandomGroupEntity*))(Il2CppBase() + 0x1712740))(this);
	}
	template <typename T = bool> T get_hasType() {
		return ((T (*)(RandomGroupEntity*))(Il2CppBase() + 0x17127C8))(this);
	}
	template <typename T = void> T AddType(RandomGroupType* newValue) {
		return ((T (*)(RandomGroupEntity*, RandomGroupType*))(Il2CppBase() + 0x17127D4))(this, newValue);
	}
	template <typename T = void> T ReplaceType(RandomGroupType* newValue) {
		return ((T (*)(RandomGroupEntity*, RandomGroupType*))(Il2CppBase() + 0x17128D8))(this, newValue);
	}
	template <typename T = void> T RemoveType() {
		return ((T (*)(RandomGroupEntity*))(Il2CppBase() + 0x17129DC))(this);
	}
	template <typename T = UseLimitComponent*> T get_useLimit() {
		return ((T (*)(RandomGroupEntity*))(Il2CppBase() + 0x17129E8))(this);
	}
	template <typename T = bool> T get_hasUseLimit() {
		return ((T (*)(RandomGroupEntity*))(Il2CppBase() + 0x1712A70))(this);
	}
	template <typename T = void> T AddUseLimit(int32_t newMaxCount, float newResetDuration) {
		return ((T (*)(RandomGroupEntity*, int32_t, float))(Il2CppBase() + 0x1712A7C))(this, newMaxCount, newResetDuration);
	}
	template <typename T = void> T ReplaceUseLimit(int32_t newMaxCount, float newResetDuration) {
		return ((T (*)(RandomGroupEntity*, int32_t, float))(Il2CppBase() + 0x1712B90))(this, newMaxCount, newResetDuration);
	}
	template <typename T = void> T RemoveUseLimit() {
		return ((T (*)(RandomGroupEntity*))(Il2CppBase() + 0x1712CA4))(this);
	}

};

