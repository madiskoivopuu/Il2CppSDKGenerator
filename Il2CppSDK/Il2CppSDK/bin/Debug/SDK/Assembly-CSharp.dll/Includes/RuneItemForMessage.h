#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ItemForMessage.h" 

class RuneItemForMessage : public ItemForMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RuneItemForMessage"));
	}


	template <typename T = void> T SetGrade(ItemEntity* item) {
		return ((T (*)(RuneItemForMessage*, ItemEntity*))(Il2CppBase() + 0x13538DC))(this, item);
	}

};

