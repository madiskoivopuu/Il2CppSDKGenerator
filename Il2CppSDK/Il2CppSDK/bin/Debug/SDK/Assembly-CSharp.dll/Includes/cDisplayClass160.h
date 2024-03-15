#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass160
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass16_0"));
	}

	template <typename R = ServerInfoEntity*> R& e() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = ServerView*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Initb__0(ProtoTools::ErrorCodes codeErr, ProtoModels::CheckUserResponse* info) {
		return ((R (*)(cDisplayClass160*, ProtoTools::ErrorCodes, ProtoModels::CheckUserResponse*))(Il2CppBase() + 0x10CA090))(this, codeErr, info);
	}

};

