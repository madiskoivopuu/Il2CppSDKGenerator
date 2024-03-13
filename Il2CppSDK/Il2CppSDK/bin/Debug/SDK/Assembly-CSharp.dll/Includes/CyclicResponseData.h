#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CyclicResponseData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CyclicResponseData"));
	}

	template <typename T = Account*> T& CyclicAccount() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Account*> T& CyclicMasterAccount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = ServerDetail*> T& CyclicServerDetail() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& WipePrice() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& ErrorMessage() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(CyclicResponseData*, uintptr_t))(Il2CppBase() + 0x1645FAC))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(CyclicResponseData*, uintptr_t))(Il2CppBase() + 0x16460A0))(this, reader);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(CyclicResponseData*))(Il2CppBase() + 0x164631C))(this);
	}

};

