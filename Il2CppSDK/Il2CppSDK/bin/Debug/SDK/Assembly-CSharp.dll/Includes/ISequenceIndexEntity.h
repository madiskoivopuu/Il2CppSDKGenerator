#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISequenceIndexEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISequenceIndexEntity"));
	}


	template <typename R = SequenceIndexComponent*> R get_sequenceIndex() {
		return ((R (*)(ISequenceIndexEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasSequenceIndex() {
		return ((R (*)(ISequenceIndexEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddSequenceIndex(int32_t newValue) {
		return ((R (*)(ISequenceIndexEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceSequenceIndex(int32_t newValue) {
		return ((R (*)(ISequenceIndexEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveSequenceIndex() {
		return ((R (*)(ISequenceIndexEntity*))(Il2CppBase() + 0x0))(this);
	}

};

