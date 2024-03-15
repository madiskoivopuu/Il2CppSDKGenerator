#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAccountContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAccountContexts"));
	}


	template <typename R = AccountContext*> R get_accounts() {
		return ((R (*)(IAccountContexts*))(Il2CppBase() + 0x0))(this);
	}

};

