#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CooldownEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CooldownEntity"));
	}


	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(CooldownEntity*))(Il2CppBase() + 0x1337BB0))(this);
	}
	template <typename R = DurationComponent*> R get_duration() {
		return ((R (*)(CooldownEntity*))(Il2CppBase() + 0x1337854))(this);
	}
	template <typename R = bool> R get_hasDuration() {
		return ((R (*)(CooldownEntity*))(Il2CppBase() + 0x1337E28))(this);
	}
	template <typename R = void> R AddDuration(float newValue) {
		return ((R (*)(CooldownEntity*, float))(Il2CppBase() + 0x1337E34))(this, newValue);
	}
	template <typename R = void> R ReplaceDuration(float newValue) {
		return ((R (*)(CooldownEntity*, float))(Il2CppBase() + 0x1336DE4))(this, newValue);
	}
	template <typename R = void> R RemoveDuration() {
		return ((R (*)(CooldownEntity*))(Il2CppBase() + 0x1337F38))(this);
	}
	template <typename R = NameComponent*> R get_name() {
		return ((R (*)(CooldownEntity*))(Il2CppBase() + 0x1337744))(this);
	}
	template <typename R = bool> R get_hasName() {
		return ((R (*)(CooldownEntity*))(Il2CppBase() + 0x1337E10))(this);
	}
	template <typename R = void> R AddName(Il2CppString* newValue) {
		return ((R (*)(CooldownEntity*, Il2CppString*))(Il2CppBase() + 0x1336CD0))(this, newValue);
	}
	template <typename R = void> R ReplaceName(Il2CppString* newValue) {
		return ((R (*)(CooldownEntity*, Il2CppString*))(Il2CppBase() + 0x1337F44))(this, newValue);
	}
	template <typename R = void> R RemoveName() {
		return ((R (*)(CooldownEntity*))(Il2CppBase() + 0x1338058))(this);
	}
	template <typename R = SequenceIndexComponent*> R get_sequenceIndex() {
		return ((R (*)(CooldownEntity*))(Il2CppBase() + 0x1338064))(this);
	}
	template <typename R = bool> R get_hasSequenceIndex() {
		return ((R (*)(CooldownEntity*))(Il2CppBase() + 0x13380EC))(this);
	}
	template <typename R = void> R AddSequenceIndex(int32_t newValue) {
		return ((R (*)(CooldownEntity*, int32_t))(Il2CppBase() + 0x13380F8))(this, newValue);
	}
	template <typename R = void> R ReplaceSequenceIndex(int32_t newValue) {
		return ((R (*)(CooldownEntity*, int32_t))(Il2CppBase() + 0x13381FC))(this, newValue);
	}
	template <typename R = void> R RemoveSequenceIndex() {
		return ((R (*)(CooldownEntity*))(Il2CppBase() + 0x1338300))(this);
	}
	template <typename R = StartTimeComponent*> R get_startTime() {
		return ((R (*)(CooldownEntity*))(Il2CppBase() + 0x13377CC))(this);
	}
	template <typename R = bool> R get_hasStartTime() {
		return ((R (*)(CooldownEntity*))(Il2CppBase() + 0x133830C))(this);
	}
	template <typename R = void> R AddStartTime(int64_t newValue) {
		return ((R (*)(CooldownEntity*, int64_t))(Il2CppBase() + 0x1338318))(this, newValue);
	}
	template <typename R = void> R ReplaceStartTime(int64_t newValue) {
		return ((R (*)(CooldownEntity*, int64_t))(Il2CppBase() + 0x1336EE8))(this, newValue);
	}
	template <typename R = void> R RemoveStartTime() {
		return ((R (*)(CooldownEntity*))(Il2CppBase() + 0x133841C))(this);
	}
	template <typename R = TagsComponent*> R get_tags() {
		return ((R (*)(CooldownEntity*))(Il2CppBase() + 0x13378DC))(this);
	}
	template <typename R = bool> R get_hasTags() {
		return ((R (*)(CooldownEntity*))(Il2CppBase() + 0x1336FEC))(this);
	}
	template <typename R = void> R AddTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(CooldownEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1336FF8))(this, newValues);
	}
	template <typename R = void> R ReplaceTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(CooldownEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1338428))(this, newValues);
	}
	template <typename R = void> R RemoveTags() {
		return ((R (*)(CooldownEntity*))(Il2CppBase() + 0x133853C))(this);
	}
	template <typename R = TargetComponent*> R get_target() {
		return ((R (*)(CooldownEntity*))(Il2CppBase() + 0x13376BC))(this);
	}
	template <typename R = bool> R get_hasTarget() {
		return ((R (*)(CooldownEntity*))(Il2CppBase() + 0x1337E1C))(this);
	}
	template <typename R = void> R AddTarget(int32_t newId) {
		return ((R (*)(CooldownEntity*, int32_t))(Il2CppBase() + 0x1336BCC))(this, newId);
	}
	template <typename R = void> R ReplaceTarget(int32_t newId) {
		return ((R (*)(CooldownEntity*, int32_t))(Il2CppBase() + 0x1338548))(this, newId);
	}
	template <typename R = void> R RemoveTarget() {
		return ((R (*)(CooldownEntity*))(Il2CppBase() + 0x133864C))(this);
	}

};

