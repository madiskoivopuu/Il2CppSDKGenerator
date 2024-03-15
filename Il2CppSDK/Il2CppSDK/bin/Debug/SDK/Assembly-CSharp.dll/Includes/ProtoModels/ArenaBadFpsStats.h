#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaBadFpsStats
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaBadFpsStats"));
	}

	 static MessageParser1ProtoModels::ArenaBadFpsStats*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaBadFpsStats*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& SumTicsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& sumTics_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& StatsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::ArenaBadFpsStatObject*>*& _repeated_stats_codec() {
		return *(FieldCodec1ProtoModels::ArenaBadFpsStatObject*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1ProtoModels::ArenaBadFpsStatObject*>*& stats_() {
		return *(RepeatedField1ProtoModels::ArenaBadFpsStatObject*>**)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& FramesFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::ArenaFrameInfo*>*& _repeated_frames_codec() {
		return *(FieldCodec1ProtoModels::ArenaFrameInfo*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 RepeatedField1ProtoModels::ArenaFrameInfo*>*& frames_() {
		return *(RepeatedField1ProtoModels::ArenaFrameInfo*>**)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::ArenaBadFpsStats*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaBadFpsStats*>* (*)(void *))(Il2CppBase() + 0x1A17BF8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1A17C5C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaBadFpsStats*))(Il2CppBase() + 0x1A17D7C))(this);
	}
	template <typename R = ProtoModels::ArenaBadFpsStats*> R Clone() {
		return ((R (*)(ArenaBadFpsStats*))(Il2CppBase() + 0x1A17F5C))(this);
	}
	template <typename R = int64_t> R get_SumTics() {
		return ((R (*)(ArenaBadFpsStats*))(Il2CppBase() + 0x1A17FB8))(this);
	}
	template <typename R = void> R set_SumTics(int64_t value) {
		return ((R (*)(ArenaBadFpsStats*, int64_t))(Il2CppBase() + 0x1A17FC0))(this, value);
	}
	 RepeatedField1ProtoModels::ArenaBadFpsStatObject*>* get_Stats() {
		return ((RepeatedField1ProtoModels::ArenaBadFpsStatObject*>* (*)(ArenaBadFpsStats*))(Il2CppBase() + 0x1A17FC8))(this);
	}
	 RepeatedField1ProtoModels::ArenaFrameInfo*>* get_Frames() {
		return ((RepeatedField1ProtoModels::ArenaFrameInfo*>* (*)(ArenaBadFpsStats*))(Il2CppBase() + 0x1A17FD0))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaBadFpsStats*, Il2CppObject*))(Il2CppBase() + 0x1A17FD8))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaBadFpsStats* other) {
		return ((R (*)(ArenaBadFpsStats*, ProtoModels::ArenaBadFpsStats*))(Il2CppBase() + 0x1A18048))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaBadFpsStats*))(Il2CppBase() + 0x1A18110))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaBadFpsStats*))(Il2CppBase() + 0x1A18194))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaBadFpsStats*, uintptr_t))(Il2CppBase() + 0x1A181F8))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaBadFpsStats*))(Il2CppBase() + 0x1A182F8))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaBadFpsStats* other) {
		return ((R (*)(ArenaBadFpsStats*, ProtoModels::ArenaBadFpsStats*))(Il2CppBase() + 0x1A1841C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaBadFpsStats*, uintptr_t))(Il2CppBase() + 0x1A184C8))(this, input);
	}

};

}
