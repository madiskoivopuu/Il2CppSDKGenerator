#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpawnItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpawnItem"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& RandomGroup() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& X() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& Y() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = unsigned char> T& Orientation() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& Rotation() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(SpawnItem*, uintptr_t))(Il2CppBase() + 0x22A81E4))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(SpawnItem*, uintptr_t))(Il2CppBase() + 0x22A826C))(this, reader);
	}

};

}
