#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass160
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass16_0"));
	}

	template <typename T = ServerInfoEntity*> T& e() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = ServerView*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Initb__0(ErrorCodes* codeErr, CheckUserResponse* info) {
		return ((T (*)(cDisplayClass160*, ErrorCodes*, CheckUserResponse*))(Il2CppBase() + 0x10CA090))(this, codeErr, info);
	}

};

