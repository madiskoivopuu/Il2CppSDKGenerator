#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CyclicResponseData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CyclicResponseData"));
	}

	template <typename R = Account*> R& CyclicAccount() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Account*> R& CyclicMasterAccount() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = ServerDetail*> R& CyclicServerDetail() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> R& WipePrice() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppString*> R& ErrorMessage() {
		return *(R*)((uintptr_t)this + 0x58);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(CyclicResponseData*, uintptr_t))(Il2CppBase() + 0x1645FAC))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(CyclicResponseData*, uintptr_t))(Il2CppBase() + 0x16460A0))(this, reader);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(CyclicResponseData*))(Il2CppBase() + 0x164631C))(this);
	}

};

