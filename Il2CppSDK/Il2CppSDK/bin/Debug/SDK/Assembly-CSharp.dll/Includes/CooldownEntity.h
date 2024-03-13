#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CooldownEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CooldownEntity"));
	}


	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(CooldownEntity*))(Il2CppBase() + 0x1337BB0))(this);
	}
	template <typename T = DurationComponent*> T get_duration() {
		return ((T (*)(CooldownEntity*))(Il2CppBase() + 0x1337854))(this);
	}
	template <typename T = bool> T get_hasDuration() {
		return ((T (*)(CooldownEntity*))(Il2CppBase() + 0x1337E28))(this);
	}
	template <typename T = void> T AddDuration(float newValue) {
		return ((T (*)(CooldownEntity*, float))(Il2CppBase() + 0x1337E34))(this, newValue);
	}
	template <typename T = void> T ReplaceDuration(float newValue) {
		return ((T (*)(CooldownEntity*, float))(Il2CppBase() + 0x1336DE4))(this, newValue);
	}
	template <typename T = void> T RemoveDuration() {
		return ((T (*)(CooldownEntity*))(Il2CppBase() + 0x1337F38))(this);
	}
	template <typename T = NameComponent*> T get_name() {
		return ((T (*)(CooldownEntity*))(Il2CppBase() + 0x1337744))(this);
	}
	template <typename T = bool> T get_hasName() {
		return ((T (*)(CooldownEntity*))(Il2CppBase() + 0x1337E10))(this);
	}
	template <typename T = void> T AddName(Il2CppString* newValue) {
		return ((T (*)(CooldownEntity*, Il2CppString*))(Il2CppBase() + 0x1336CD0))(this, newValue);
	}
	template <typename T = void> T ReplaceName(Il2CppString* newValue) {
		return ((T (*)(CooldownEntity*, Il2CppString*))(Il2CppBase() + 0x1337F44))(this, newValue);
	}
	template <typename T = void> T RemoveName() {
		return ((T (*)(CooldownEntity*))(Il2CppBase() + 0x1338058))(this);
	}
	template <typename T = SequenceIndexComponent*> T get_sequenceIndex() {
		return ((T (*)(CooldownEntity*))(Il2CppBase() + 0x1338064))(this);
	}
	template <typename T = bool> T get_hasSequenceIndex() {
		return ((T (*)(CooldownEntity*))(Il2CppBase() + 0x13380EC))(this);
	}
	template <typename T = void> T AddSequenceIndex(int32_t newValue) {
		return ((T (*)(CooldownEntity*, int32_t))(Il2CppBase() + 0x13380F8))(this, newValue);
	}
	template <typename T = void> T ReplaceSequenceIndex(int32_t newValue) {
		return ((T (*)(CooldownEntity*, int32_t))(Il2CppBase() + 0x13381FC))(this, newValue);
	}
	template <typename T = void> T RemoveSequenceIndex() {
		return ((T (*)(CooldownEntity*))(Il2CppBase() + 0x1338300))(this);
	}
	template <typename T = StartTimeComponent*> T get_startTime() {
		return ((T (*)(CooldownEntity*))(Il2CppBase() + 0x13377CC))(this);
	}
	template <typename T = bool> T get_hasStartTime() {
		return ((T (*)(CooldownEntity*))(Il2CppBase() + 0x133830C))(this);
	}
	template <typename T = void> T AddStartTime(int64_t newValue) {
		return ((T (*)(CooldownEntity*, int64_t))(Il2CppBase() + 0x1338318))(this, newValue);
	}
	template <typename T = void> T ReplaceStartTime(int64_t newValue) {
		return ((T (*)(CooldownEntity*, int64_t))(Il2CppBase() + 0x1336EE8))(this, newValue);
	}
	template <typename T = void> T RemoveStartTime() {
		return ((T (*)(CooldownEntity*))(Il2CppBase() + 0x133841C))(this);
	}
	template <typename T = TagsComponent*> T get_tags() {
		return ((T (*)(CooldownEntity*))(Il2CppBase() + 0x13378DC))(this);
	}
	template <typename T = bool> T get_hasTags() {
		return ((T (*)(CooldownEntity*))(Il2CppBase() + 0x1336FEC))(this);
	}
	template <typename T = void> T AddTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(CooldownEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1336FF8))(this, newValues);
	}
	template <typename T = void> T ReplaceTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(CooldownEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1338428))(this, newValues);
	}
	template <typename T = void> T RemoveTags() {
		return ((T (*)(CooldownEntity*))(Il2CppBase() + 0x133853C))(this);
	}
	template <typename T = TargetComponent*> T get_target() {
		return ((T (*)(CooldownEntity*))(Il2CppBase() + 0x13376BC))(this);
	}
	template <typename T = bool> T get_hasTarget() {
		return ((T (*)(CooldownEntity*))(Il2CppBase() + 0x1337E1C))(this);
	}
	template <typename T = void> T AddTarget(int32_t newId) {
		return ((T (*)(CooldownEntity*, int32_t))(Il2CppBase() + 0x1336BCC))(this, newId);
	}
	template <typename T = void> T ReplaceTarget(int32_t newId) {
		return ((T (*)(CooldownEntity*, int32_t))(Il2CppBase() + 0x1338548))(this, newId);
	}
	template <typename T = void> T RemoveTarget() {
		return ((T (*)(CooldownEntity*))(Il2CppBase() + 0x133864C))(this);
	}

};

