#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ArmingEmojisData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArmingEmojisData"));
	}

	template <typename R = Il2CppArray<Il2CppString*>*> R& Names() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ArmingEmojisData*, uintptr_t))(Il2CppBase() + 0x1A5138C))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ArmingEmojisData*, uintptr_t))(Il2CppBase() + 0x1A513C8))(this, reader);
	}

};

