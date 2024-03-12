#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ArmingEmojisData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArmingEmojisData"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Names() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ArmingEmojisData*, uintptr_t))(Il2CppBase() + 0x1A5138C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ArmingEmojisData*, uintptr_t))(Il2CppBase() + 0x1A513C8))(this, reader);
	}

};

}
