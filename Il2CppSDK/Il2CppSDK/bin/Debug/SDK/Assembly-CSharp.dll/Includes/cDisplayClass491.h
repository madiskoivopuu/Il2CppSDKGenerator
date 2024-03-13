#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass491
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass49_1"));
	}

	template <typename T = ContactsEntity*> T& contact() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = cDisplayClass490*> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T StoreMessagesb__0(ChatEntity* x) {
		return ((T (*)(cDisplayClass491*, ChatEntity*))(Il2CppBase() + 0x11195D0))(this, x);
	}

};

