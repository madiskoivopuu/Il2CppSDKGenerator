#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DeleteInventoryData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DeleteInventoryData"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	 Nullable1int32_t>*& MaxCount() {
		return *(Nullable1int32_t>**)((uintptr_t)this + 0x4);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(DeleteInventoryData*, uintptr_t))(Il2CppBase() + 0xEB8CE0))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(DeleteInventoryData*, uintptr_t))(Il2CppBase() + 0xEB8D34))(this, reader);
	}

};

