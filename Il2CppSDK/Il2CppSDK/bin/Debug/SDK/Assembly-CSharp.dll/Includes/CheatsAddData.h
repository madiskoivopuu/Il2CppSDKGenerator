#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CheatsAddData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CheatsAddData"));
	}

	template <typename T = uintptr_t> T& Kind() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& IntParam() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& FloatParam() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(CheatsAddData*, uintptr_t))(Il2CppBase() + 0x173CFD8))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(CheatsAddData*, uintptr_t))(Il2CppBase() + 0x173D04C))(this, reader);
	}

};

}
