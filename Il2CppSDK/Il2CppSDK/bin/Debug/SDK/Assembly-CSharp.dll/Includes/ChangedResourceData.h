#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChangedResourceData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChangedResourceData"));
	}

	template <typename T = Il2CppString*> T& Resource() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Delta() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ChangedResourceData*, uintptr_t))(Il2CppBase() + 0x13EBC08))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ChangedResourceData*, uintptr_t))(Il2CppBase() + 0x13EBC5C))(this, reader);
	}

};

}
