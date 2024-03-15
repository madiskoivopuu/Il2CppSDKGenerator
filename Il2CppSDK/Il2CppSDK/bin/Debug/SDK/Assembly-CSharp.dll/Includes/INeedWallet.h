#pragma once
#include <Il2Cpp/Il2Cpp.h>

class INeedWallet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "INeedWallet"));
	}


	template <typename R = Il2CppArray<Il2CppString*>*> R GetWalletResources() {
		return ((R (*)(INeedWallet*))(Il2CppBase() + 0x0))(this);
	}

};

