#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SeenNewData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SeenNewData"));
	}

	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Param() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(SeenNewData*, uintptr_t))(Il2CppBase() + 0x1361F38))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(SeenNewData*, uintptr_t))(Il2CppBase() + 0x1361F8C))(this, reader);
	}

};

}
