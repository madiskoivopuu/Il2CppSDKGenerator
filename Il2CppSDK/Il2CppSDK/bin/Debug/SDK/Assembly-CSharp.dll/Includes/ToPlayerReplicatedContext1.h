#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseReplicatedContext1.h" 

template <typename TEntity>
class ToPlayerReplicatedContext1 : public BaseReplicatedContext1<TEntity>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ToPlayerReplicatedContext`1"));
	}



};

