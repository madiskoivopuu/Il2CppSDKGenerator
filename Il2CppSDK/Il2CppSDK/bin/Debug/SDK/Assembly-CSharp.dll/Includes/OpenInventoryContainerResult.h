#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OpenInventoryContainerResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OpenInventoryContainerResult"));
	}

	template <typename T = Il2CppString*> T& Key() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Resources() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& ErrorMsg() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& AnalyticName() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(OpenInventoryContainerResult*, uintptr_t))(Il2CppBase() + 0x11E3BAC))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(OpenInventoryContainerResult*, uintptr_t))(Il2CppBase() + 0x11E3C90))(this, reader);
	}

};

}
