#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISequenceIndexEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISequenceIndexEntity"));
	}


	template <typename T = uintptr_t> T get_sequenceIndex() {
		return ((T (*)(ISequenceIndexEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasSequenceIndex() {
		return ((T (*)(ISequenceIndexEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddSequenceIndex(int32_t newValue) {
		return ((T (*)(ISequenceIndexEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceSequenceIndex(int32_t newValue) {
		return ((T (*)(ISequenceIndexEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveSequenceIndex() {
		return ((T (*)(ISequenceIndexEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
