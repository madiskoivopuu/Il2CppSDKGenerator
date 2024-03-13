#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext1.h" 

class RandomGroupDataContext : public DataContext1<RandomGroupEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RandomGroupDataContext"));
	}



};

