#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DeleteInventoryData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DeleteInventoryData"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Nullable1int32_t>*> T& MaxCount() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(DeleteInventoryData*, uintptr_t))(Il2CppBase() + 0xEB8CE0))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(DeleteInventoryData*, uintptr_t))(Il2CppBase() + 0xEB8D34))(this, reader);
	}

};

