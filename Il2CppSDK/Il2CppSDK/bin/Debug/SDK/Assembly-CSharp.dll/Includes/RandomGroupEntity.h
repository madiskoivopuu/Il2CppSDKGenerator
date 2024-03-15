#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RandomGroupEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RandomGroupEntity"));
	}


	template <typename R = BlueprintComponent*> R get_blueprint() {
		return ((R (*)(RandomGroupEntity*))(Il2CppBase() + 0x1711ED8))(this);
	}
	template <typename R = bool> R get_hasBlueprint() {
		return ((R (*)(RandomGroupEntity*))(Il2CppBase() + 0x1711F60))(this);
	}
	template <typename R = void> R AddBlueprint(Il2CppString* newName) {
		return ((R (*)(RandomGroupEntity*, Il2CppString*))(Il2CppBase() + 0x1711F6C))(this, newName);
	}
	template <typename R = void> R ReplaceBlueprint(Il2CppString* newName) {
		return ((R (*)(RandomGroupEntity*, Il2CppString*))(Il2CppBase() + 0x1712080))(this, newName);
	}
	template <typename R = void> R RemoveBlueprint() {
		return ((R (*)(RandomGroupEntity*))(Il2CppBase() + 0x1712194))(this);
	}
	template <typename R = OldBlueprintComponent*> R get_oldBlueprint() {
		return ((R (*)(RandomGroupEntity*))(Il2CppBase() + 0x17121A0))(this);
	}
	template <typename R = bool> R get_hasOldBlueprint() {
		return ((R (*)(RandomGroupEntity*))(Il2CppBase() + 0x1712228))(this);
	}
	template <typename R = void> R AddOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(RandomGroupEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1712234))(this, newNames);
	}
	template <typename R = void> R ReplaceOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(RandomGroupEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1712348))(this, newNames);
	}
	template <typename R = void> R RemoveOldBlueprint() {
		return ((R (*)(RandomGroupEntity*))(Il2CppBase() + 0x171245C))(this);
	}
	template <typename R = RandomGroupComponent*> R get_randomGroup() {
		return ((R (*)(RandomGroupEntity*))(Il2CppBase() + 0x1712468))(this);
	}
	template <typename R = bool> R get_hasRandomGroup() {
		return ((R (*)(RandomGroupEntity*))(Il2CppBase() + 0x17124F0))(this);
	}
	template <typename R = void> R AddRandomGroup(Il2CppArray<RGItem*>* newList, int32_t newMaxItemsCount) {
		return ((R (*)(RandomGroupEntity*, Il2CppArray<RGItem*>*, int32_t))(Il2CppBase() + 0x17124FC))(this, newList, newMaxItemsCount);
	}
	template <typename R = void> R ReplaceRandomGroup(Il2CppArray<RGItem*>* newList, int32_t newMaxItemsCount) {
		return ((R (*)(RandomGroupEntity*, Il2CppArray<RGItem*>*, int32_t))(Il2CppBase() + 0x1712618))(this, newList, newMaxItemsCount);
	}
	template <typename R = void> R RemoveRandomGroup() {
		return ((R (*)(RandomGroupEntity*))(Il2CppBase() + 0x1712734))(this);
	}
	template <typename R = TypeComponent*> R get_type() {
		return ((R (*)(RandomGroupEntity*))(Il2CppBase() + 0x1712740))(this);
	}
	template <typename R = bool> R get_hasType() {
		return ((R (*)(RandomGroupEntity*))(Il2CppBase() + 0x17127C8))(this);
	}
	template <typename R = void> R AddType(RandomGroupType* newValue) {
		return ((R (*)(RandomGroupEntity*, RandomGroupType*))(Il2CppBase() + 0x17127D4))(this, newValue);
	}
	template <typename R = void> R ReplaceType(RandomGroupType* newValue) {
		return ((R (*)(RandomGroupEntity*, RandomGroupType*))(Il2CppBase() + 0x17128D8))(this, newValue);
	}
	template <typename R = void> R RemoveType() {
		return ((R (*)(RandomGroupEntity*))(Il2CppBase() + 0x17129DC))(this);
	}
	template <typename R = UseLimitComponent*> R get_useLimit() {
		return ((R (*)(RandomGroupEntity*))(Il2CppBase() + 0x17129E8))(this);
	}
	template <typename R = bool> R get_hasUseLimit() {
		return ((R (*)(RandomGroupEntity*))(Il2CppBase() + 0x1712A70))(this);
	}
	template <typename R = void> R AddUseLimit(int32_t newMaxCount, float newResetDuration) {
		return ((R (*)(RandomGroupEntity*, int32_t, float))(Il2CppBase() + 0x1712A7C))(this, newMaxCount, newResetDuration);
	}
	template <typename R = void> R ReplaceUseLimit(int32_t newMaxCount, float newResetDuration) {
		return ((R (*)(RandomGroupEntity*, int32_t, float))(Il2CppBase() + 0x1712B90))(this, newMaxCount, newResetDuration);
	}
	template <typename R = void> R RemoveUseLimit() {
		return ((R (*)(RandomGroupEntity*))(Il2CppBase() + 0x1712CA4))(this);
	}

};

