#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISeasonDataContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISeasonDataContexts"));
	}


	template <typename R = SeasonDataContext*> R get_season() {
		return ((R (*)(ISeasonDataContexts*))(Il2CppBase() + 0x0))(this);
	}

};

