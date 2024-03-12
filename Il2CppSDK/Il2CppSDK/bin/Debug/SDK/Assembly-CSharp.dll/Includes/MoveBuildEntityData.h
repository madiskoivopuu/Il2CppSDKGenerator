#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MoveBuildEntityData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MoveBuildEntityData"));
	}

	template <typename T = int32_t> T& EntityId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& PosX() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& PosY() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = unsigned char> T& Orientation() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(MoveBuildEntityData*, uintptr_t))(Il2CppBase() + 0x1556870))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(MoveBuildEntityData*, uintptr_t))(Il2CppBase() + 0x15568E4))(this, reader);
	}

};

}
