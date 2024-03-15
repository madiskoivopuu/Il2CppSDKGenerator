#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICurrencyDataContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICurrencyDataContexts"));
	}


	template <typename R = CurrencyDataContext*> R get_currency() {
		return ((R (*)(ICurrencyDataContexts*))(Il2CppBase() + 0x0))(this);
	}

};

