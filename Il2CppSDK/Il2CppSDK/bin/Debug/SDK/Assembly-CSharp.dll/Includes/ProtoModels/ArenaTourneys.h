#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaTourneys
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaTourneys"));
	}

	 static MessageParser1ProtoModels::ArenaTourneys*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaTourneys*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& TourneysFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::Tourney*>*& _repeated_tourneys_codec() {
		return *(FieldCodec1ProtoModels::Tourney*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1ProtoModels::Tourney*>*& tourneys_() {
		return *(RepeatedField1ProtoModels::Tourney*>**)((uintptr_t)this + 0x10);
	}

	 static MessageParser1ProtoModels::ArenaTourneys*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaTourneys*>* (*)(void *))(Il2CppBase() + 0xF45E3C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0xF45EA0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaTourneys*))(Il2CppBase() + 0xF45FC0))(this);
	}
	template <typename R = ProtoModels::ArenaTourneys*> R Clone() {
		return ((R (*)(ArenaTourneys*))(Il2CppBase() + 0xF46118))(this);
	}
	 RepeatedField1ProtoModels::Tourney*>* get_Tourneys() {
		return ((RepeatedField1ProtoModels::Tourney*>* (*)(ArenaTourneys*))(Il2CppBase() + 0xF46174))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaTourneys*, Il2CppObject*))(Il2CppBase() + 0xF4617C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaTourneys* other) {
		return ((R (*)(ArenaTourneys*, ProtoModels::ArenaTourneys*))(Il2CppBase() + 0xF461EC))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaTourneys*))(Il2CppBase() + 0xF46278))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaTourneys*))(Il2CppBase() + 0xF462A4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaTourneys*, uintptr_t))(Il2CppBase() + 0xF46308))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaTourneys*))(Il2CppBase() + 0xF463A8))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaTourneys* other) {
		return ((R (*)(ArenaTourneys*, ProtoModels::ArenaTourneys*))(Il2CppBase() + 0xF46438))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaTourneys*, uintptr_t))(Il2CppBase() + 0xF464B0))(this, input);
	}

};

}
