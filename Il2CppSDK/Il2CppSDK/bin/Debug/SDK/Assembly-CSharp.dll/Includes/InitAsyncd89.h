#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InitAsyncd89
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<InitAsync>d__89"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = DataBlueprints*> T& datablueprints() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = DataContexts*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = cDisplayClass890*> T& 8__1() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Task1Il2CppDictionary<Il2CppString*, int32_t>*>*> T& stringMapsTask5__2() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Task1Il2CppList<EntityBlueprint*>*>*> T& recipeTask5__3() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = TaskFactory1Il2CppDictionary<Il2CppString*, EntityBlueprint*>*>*> T& factory5__4() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& 7__wrap4() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& 7__wrap5() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = ValueTuple2Action1Il2CppDictionary<Il2CppString*, EntityBlueprint*>*>*, Func1Il2CppDictionary<Il2CppString*, EntityBlueprint*>*>*>*> T& contextEntry5__7() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Task1Il2CppDictionary<Il2CppString*, EntityBlueprint*>*>*> T& currentTask5__8() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(InitAsyncd89*))(Il2CppBase() + 0xE96EE0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(InitAsyncd89*))(Il2CppBase() + 0xE96EE4))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(InitAsyncd89*))(Il2CppBase() + 0xE9752C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(InitAsyncd89*))(Il2CppBase() + 0xE97534))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(InitAsyncd89*))(Il2CppBase() + 0xE97574))(this);
	}

};

