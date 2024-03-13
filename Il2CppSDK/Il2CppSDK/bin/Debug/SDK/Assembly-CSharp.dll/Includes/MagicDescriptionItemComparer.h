#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicDescriptionItemComparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicDescriptionItemComparer"));
	}


	template <typename T = int32_t> T Compare(MagicEntity* x, MagicEntity* y) {
		return ((T (*)(MagicDescriptionItemComparer*, MagicEntity*, MagicEntity*))(Il2CppBase() + 0xEA7988))(this, x, y);
	}

};

