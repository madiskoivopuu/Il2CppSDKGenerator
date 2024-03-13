#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseDataComponent1.h" 

class QuestDataComponent : public BaseDataComponent1<QuestDataEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestDataComponent"));
	}



};

