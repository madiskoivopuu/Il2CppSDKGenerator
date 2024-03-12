#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaTourneys
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaTourneys"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TourneysFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_tourneys_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& tourneys_() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0xF45E3C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0xF45EA0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaTourneys*))(Il2CppBase() + 0xF45FC0))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaTourneys*))(Il2CppBase() + 0xF46118))(this);
	}
	template <typename T = void*> T get_Tourneys() {
		return ((T (*)(ArenaTourneys*))(Il2CppBase() + 0xF46174))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaTourneys*, uintptr_t))(Il2CppBase() + 0xF4617C))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaTourneys*, uintptr_t))(Il2CppBase() + 0xF461EC))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaTourneys*))(Il2CppBase() + 0xF46278))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaTourneys*))(Il2CppBase() + 0xF462A4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaTourneys*, uintptr_t))(Il2CppBase() + 0xF46308))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaTourneys*))(Il2CppBase() + 0xF463A8))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaTourneys*, uintptr_t))(Il2CppBase() + 0xF46438))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaTourneys*, uintptr_t))(Il2CppBase() + 0xF464B0))(this, input);
	}

};

}
