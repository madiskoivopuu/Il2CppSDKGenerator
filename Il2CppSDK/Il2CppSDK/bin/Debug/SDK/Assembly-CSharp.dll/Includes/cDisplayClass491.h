#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass491
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass49_1"));
	}

	template <typename R = ContactsEntity*> R& contact() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = cDisplayClass490*> R& CS$8__locals1() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = bool> R StoreMessagesb__0(ChatEntity* x) {
		return ((R (*)(cDisplayClass491*, ChatEntity*))(Il2CppBase() + 0x11195D0))(this, x);
	}

};

