#pragma once
#include <Il2Cpp/Il2Cpp.h>

class World
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "World"));
	}

	template <typename T = Il2CppString*> T& Location() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& Icon() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(World*, uintptr_t))(Il2CppBase() + 0x22A852C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(World*, uintptr_t))(Il2CppBase() + 0x22A857C))(this, reader);
	}

};

